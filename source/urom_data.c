/*
 * This file is automatically created by crurom 1.2.2
 */
#include <fs/uromfs.h>

/*
 * File entry 1: html/example.txt
 */
prog_char file1data[] = {
0x48,0x65,0x6c,0x6c,0x6f,0x20,0x57,0x6f,0x72,0x6c,0x64,0x20,0x66,0x72,0x6f,0x6d,
0x20,0x74,0x68,0x65,0x20,0x69,0x6e,0x74,0x65,0x72,0x77,0x65,0x62,0x7a,0x2e,
};

prog_char file1name[] = "html/example.txt";

static ROMENTRY file1entry = { 0, (prog_char *)file1name, 31, (prog_char *)file1data };

ROMENTRY *romEntryList = &file1entry;
