#include "grt.h"

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <stdio.h>
#include <unistd.h>

#define my_package YgooSioSnetYP

#define sockWrap(x) YPib((P)x)
#define sockUnwrap(x) ((int)YPiu(x))

#define strUnwrap(x) ((char *)YPsu(x))
#define strWrap(x) YPsb((P)x)

#define intUnwrap(x) ((int)YPiu(x))

#define MAXMSG 256

#define GOOFUNC(name)    P YgooSioSnetYP ## name

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

  listen(sockUnwrap(sockfd), 5);
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

GOOFUNC(read_socket_byte) (P sockfd)
{
  static char buf[1];

  if(recv(sockUnwrap(sockfd), &buf[0], 1, 0) < 1)
    {
      return YPfalse;
    }
  
  return YPcb(buf[0]);
}

GOOFUNC(peek_socket_byte) (P sockfd)
{
  char buf[1];

  if(recv(sockUnwrap(sockfd), &buf[0], 1, MSG_PEEK) < 1)
    {
      return YPfalse;
    }
  
  return YPcb(buf[0]);
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
  len = strlen(dastr);

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

