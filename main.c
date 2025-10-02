#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>

#define NB_QUEUE 5

int main(){
  int socketserver = socket(AF_INET, SOCK_STREAM, 0);
  struct sockaddr_in addrserver;
  addrserver.sin_family = AF_INET;
  addrserver.sin_port = htons(80);
  addrserver.sin_addr.s_addr = INADDR_ANY;

  bind(socketserver, (struct sockaddr *)&addrserver, sizeof(addrserver));
  printf("bind of socket: %d",socketserver);

  listen(socketserver, NB_QUEUE);
  printf("listen to socket %d with %d queue size",socketserver, NB_QUEUE);

  struct sockaddr_in addrclient;
}
