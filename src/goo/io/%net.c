#include "grt.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <netdb.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define my_package YgooSioSnetYP

#define sockWrap(x) YPib((P)x)
#define sockUnwrap(x) ((int)YPiu(x))

#define strUnwrap(x) ((char *)YPsu(x))
#define strWrap(x) YPsb((P)x)

#define intUnwrap(x) ((int)YPiu(x))

#define MAXMSG 256

#define GOOFUNC(name)    P YgooSioSnetYP ## name

EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(YgooSioSnetYsocket_eof,"goo/io/net","socket-eof");
EXT(YgooStypesYlen, "goo/types", "len");
EXT(YgooSmacrosYelt, "goo/macros", "elt");

GOOFUNC(new_socket) ()
{
  int sock;
 
  sock = socket(AF_INET, SOCK_STREAM, 0); // default protocol.

  if (sock < 0)
    return YPfalse;

  return sockWrap(sock);
}

GOOFUNC(connect_socket) (P sockfd, P straddr, P iport)
{
  struct sockaddr_in me, target;
  struct hostent *h;
  int rc;

  h = gethostbyname(strUnwrap(straddr));
  
  if(h == NULL)
    {
      return YPfalse;
    }
  
  target.sin_family = h->h_addrtype;
  memcpy((char *) &target.sin_addr.s_addr, h->h_addr_list[0], h->h_length);
  target.sin_port = htons(intUnwrap(iport));

  me.sin_family = AF_INET;
  me.sin_addr.s_addr = htonl(INADDR_ANY);
  me.sin_port = htons(0);

  rc = bind(sockUnwrap(sockfd), (struct sockaddr *) &me, sizeof(me));
  if (rc < 0)
    {
      return YPfalse;
    }

  rc = connect(sockUnwrap(sockfd), (struct sockaddr *)&target, sizeof(target));
  if (rc < 0)
    {
      return YPfalse;
    }

  return YPtrue;
}

GOOFUNC(listen_socket) (P sockfd, P iport)
{
  struct sockaddr_in me;

  me.sin_family = AF_INET;
  me.sin_addr.s_addr = htonl(INADDR_ANY);
  me.sin_port = htons(intUnwrap(iport));

  if (bind(sockUnwrap(sockfd), (struct sockaddr *) &me, sizeof(me)) < 0)
    {
      return YPfalse;
    }

  if(listen(sockUnwrap(sockfd), 5) == 0)
    return YPtrue;
  else
    return YPfalse;
}

GOOFUNC(accept_socket) (P sockfd)
{
  int newsock;
  struct sockaddr_in dude;
  int dudeLen;

  dudeLen = sizeof(dude);
  newsock = accept(sockUnwrap(sockfd), (struct sockaddr *)&dude, &dudeLen);
  if(newsock < 0)
    {
      return YPfalse;
    }

  return sockWrap(newsock);
}

GOOFUNC(socket_connected) (P sockfd)
{
  struct sockaddr_in dude;
  int dudeLen;
  int retval;

  dudeLen = sizeof(dude);
  
  retval = getpeername(sockUnwrap(sockfd), (struct sockaddr *)&dude, &dudeLen);
  
  if(retval < 0)
    {
      return YPfalse;
    }
  else
    {
      return YPtrue;
    }
}

GOOFUNC(read_max) (P sockfd)
{
  char buf[1024];
  int retval;

  retval = recv(sockUnwrap(sockfd), &buf[0], 1024, 0);
  if(retval == 0)
    {
      return VARREF(YgooSioSnetYsocket_eof);
    }
  else if(retval < 0)
    {
      if(errno == EAGAIN)
	{
	  return YPfalse;
	}
      else
	{
	  return VARREF(YgooSioSnetYsocket_eof);
	}
    }
  
  return YPsb_with_len(buf, retval);
}

GOOFUNC(read_socket_byte) (P sockfd)
{
  char buf[1];
  int retval;

  retval = recv(sockUnwrap(sockfd), &buf[0], 1, 0);
  if(retval == 0)
    {
      return VARREF(YgooSioSnetYsocket_eof);
    }
  else if(retval < 0)
    {
      if(errno == EAGAIN)
	{
	  return YPfalse;
	}
      else
	{
	  return VARREF(YgooSioSnetYsocket_eof);
	}
    }
  
  return YPcb((P)((int)buf[0]));
}

GOOFUNC(peek_socket_byte) (P sockfd)
{
  char buf[1];
  int retval;

  retval = recv(sockUnwrap(sockfd), &buf[0], 1, MSG_PEEK);
  if(retval == 0)
    {
      return VARREF(YgooSioSnetYsocket_eof);
    }
  else if(retval < 0)
    {
      if(errno == EAGAIN)
	{
	  return YPfalse;
	}
      else
	{
	  return VARREF(YgooSioSnetYsocket_eof);
	}
    }
  
  return YPcb((P)((int)buf[0]));
}

GOOFUNC(write_socket_byte) (P sockfd, P byte)
{
  char buf[1];

  buf[0] = YPcu(byte);

  if(send(sockUnwrap(sockfd), &buf[0], 1, 0) < 1)
    {
      return YPfalse;
    }
  else
    {
      return YPtrue;
    }
} 

GOOFUNC(write_socket_string) (P sockfd, P str)
{
  char *dastr;
  int len;

  dastr = (char *)YPsu(str);
  len = (int)YPslen(str);

  // I have a feeling that this should be looping...
  if(send(sockUnwrap(sockfd), dastr, len, 0) < len)
    {
      return YPfalse;
    }
  else
    {
      return YPtrue;
    }
}

GOOFUNC(close_socket) (P sockfd)
{
  close(sockUnwrap(sockfd));

  return YPtrue;
}

GOOFUNC(make_non_blocking) (P sockfd)
{
  int opts;
  int sock = sockUnwrap(sockfd);

  opts = fcntl(sock, F_GETFL);
  if(opts < 0)
    {
      return YPfalse;
    }

  opts |= O_NONBLOCK;

  if(fcntl(sock, F_SETFL, opts) < 0)
    {
      return YPfalse;
    }

  return YPtrue;
}

#define YPtlen(a)        (int)YPiu(XCALL1(1, VARREF(YgooStypesYlen), a))
#define YPtelt(a, b)     XCALL2(1, VARREF(YgooSmacrosYelt), a, YPib((P)b))

GOOFUNC(select) (P readvec, P writevec, P exceptvec, P timeout)
{
  fd_set readset, writeset, exceptset;
  P read_outvec, write_outvec, except_outvec, result_tup;
  int highest=0;
  struct timeval tv;
  int i, len, time_millis, retval;

  DEFCREGS();

  FD_ZERO(&readset);
  FD_ZERO(&writeset);
  FD_ZERO(&exceptset);

  // loop over read
  if((readvec != YPfalse) && ((len = (int)YPtlen(readvec)) > 0))
    {
      for(i=0; i < len; i++)
	{
	  int fd = sockUnwrap(XCALL1(1, VARREF(YgooSioSportYport_handle), YPtelt(readvec, i)));
	  FD_SET(fd, &readset);

	  if(fd > highest)
	    highest=fd;
	}
    }
  
  // loop over write
  if((writevec != YPfalse) && ((len = (int)YPtlen(writevec)) > 0))
    {
      for(i=0; i < len; i++)
	{
	  int fd = sockUnwrap(XCALL1(1, VARREF(YgooSioSportYport_handle), YPtelt(writevec, i)));
	  FD_SET(fd, &writeset);

	  if(fd > highest)
	    highest=fd;
	}
    }
   
  // loop over except
  if((exceptvec != YPfalse) && ((len = (int)YPtlen(exceptvec)) > 0))
    {
      for(i=0; i < len; i++)
	{
	  int fd = sockUnwrap(XCALL1(1, VARREF(YgooSioSportYport_handle), YPtelt(exceptvec, i)));
	  FD_SET(fd, &exceptset);

	  if(fd > highest)
	    highest=fd;
	}
    }
  

  if(timeout != YPfalse)
    {
      time_millis = intUnwrap(timeout);
      tv.tv_sec = time_millis / 1000;
      tv.tv_usec = (time_millis % 1000) * 1000;
      
      retval = select(highest+1, &readset, &writeset, &exceptset, &tv);
    }
  else
    {
      retval = select(highest+1, &readset, &writeset, &exceptset, NULL);
    }
  if(retval < 0)
    {
      printf("Something's real bad wrong... in my pants!\n");
      return YPfalse;
    }
  
  // loop over read
  if((readvec != YPfalse) && ((len = (int)YPtlen(readvec)) > 0))
    {
      int numSet = 0, idxTup=0;

      // Find how many there are in this guy.
      for(i=0; i < len; i++)
	{
	  int fd = sockUnwrap(XCALL1(1, VARREF(YgooSioSportYport_handle), YPtelt(readvec, i)));
	  if(FD_ISSET(fd, &readset))
	    numSet++;
	}
      
      // Create a tup and fill it up.  
      // Note the inefficiency with which I punish the infidels who would dare attempt 
      //  to do things in a non-blocking fashion!  They will pay!!!
      read_outvec = YPPtfab((P)numSet, (P)0);

      for(i=0; i < len; i++)
	{
	  P obj_val = YPtelt(readvec, i);
	  int fd = sockUnwrap(XCALL1(1, VARREF(YgooSioSportYport_handle), obj_val));
	  if(FD_ISSET(fd, &readset))
	    {
	      YPtelt_setter(obj_val, read_outvec, idxTup++);
	    }
	}
    }
  else
    {
      read_outvec = YPfalse;
    }

  // loop over write
  if((writevec != YPfalse) && ((len = (int)YPtlen(writevec)) > 0))
    {
      int numSet = 0, idxTup=0;

      // Find how many there are in this guy.
      for(i=0; i < len; i++)
	{
	  int fd = sockUnwrap(XCALL1(1, VARREF(YgooSioSportYport_handle), YPtelt(writevec, i)));
	  if(FD_ISSET(fd, &writeset))
	    numSet++;
	}
      
      // Create a tup and fill it up.  
      // Note the inefficiency with which I punish the infidels who would dare attempt 
      //  to do things in a non-blocking fashion!  They will pay!!!
      write_outvec = YPPtfab((P)numSet, (P)0);

      for(i=0; i < len; i++)
	{
	  P obj_val = YPtelt(writevec, i);
	  int fd = sockUnwrap(XCALL1(1, VARREF(YgooSioSportYport_handle), obj_val));
	  if(FD_ISSET(fd, &writeset))
	    {
	      YPtelt_setter(obj_val, write_outvec, idxTup++);
	    }
	}
    }
  else
    {
      write_outvec = YPfalse;
    }

  // loop over except
  if((exceptvec != YPfalse) && ((len = (int)YPtlen(exceptvec)) > 0))
    {
      int numSet = 0, idxTup=0;

      // Find how many there are in this guy.
      for(i=0; i < len; i++)
	{
	  int fd = sockUnwrap(XCALL1(1, VARREF(YgooSioSportYport_handle), YPtelt(exceptvec, i)));
	  if(FD_ISSET(fd, &exceptset))
	    numSet++;
	}
      
      // Create a tup and fill it up.  
      // Note the inefficiency with which I punish the infidels who would dare attempt 
      //  to do things in a non-blocking fashion!  They will pay!!!
      except_outvec = YPPtfab((P)numSet, (P)0);

      for(i=0; i < len; i++)
	{
	  P obj_val = YPtelt(exceptvec, i);
	  int fd = sockUnwrap(XCALL1(1, VARREF(YgooSioSportYport_handle), obj_val));
	  if(FD_ISSET(fd, &exceptset))
	    {
	      YPtelt_setter(obj_val, except_outvec, idxTup++);
	    }
	}
    }
  else
    {
      except_outvec = YPfalse;
    }

  result_tup = YPPtfab(3, (P)0);
  YPtelt_setter(read_outvec, result_tup, 0);
  YPtelt_setter(write_outvec, result_tup, 1);
  YPtelt_setter(except_outvec, result_tup, 2);

  return result_tup;
}

