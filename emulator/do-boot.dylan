module: proto

%build-booted-accessors();
*booted?* := #t;
snapshot-base-environment();
snapshot-boot-environment();
load-runtime();
/*
load-ascii();
load-io();
load-read();
load-write();
load-syntax();
load-environment();
load-ast();
load-ast-eval();
*/
// load-boot();
// top();
