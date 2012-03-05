#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <io.h>

#include <sys/version.h>
#include <sys/confnet.h>
#include <sys/heap.h>
#include <sys/thread.h>
#include <sys/timer.h>

#include <sys/socket.h>
#include <arpa/inet.h>
#include <net/route.h>
#include <netinet/tcp.h>

#include <pro/dhcp.h>
#include <time.h>

#define DBG_DEVICE devDebug0
#define DBG_DEVNAME "uart0"
#define DBG_BAUDRATE 115200
#define MY_MAC { 0x00, 0x06, 0x98, 0x10, 0x01, 0x10 }
#define MY_IPADDR "192.168.192.100"
#define MY_IPMASK "255.255.255.0"
#define MY_IPGATE "192.168.192.1"
#define MAX_HEADERLINE 512
#define TCPIP_BUFSIZ 6000
#define TCPIP_MSS 1460
#define TCPIP_READTIMEOUT 3000

#ifndef __PlayStream_H
#define __PlayStream_H

void PlayMp3Stream(FILE *stream, u_long metaint);
int ProcessMetaData(FILE *stream);
FILE *ConnectStation(TCPSOCKET *sock, u_long ip, u_short port, u_long *metaint, char radio_url[]);
int ConfigureLan(char *devname);
void streamPlay(char radio_ipaddr[], char radio_port[], char radio_url);

#endif
