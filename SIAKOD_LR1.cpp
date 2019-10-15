#include<iostream>
#include<stdio.h>

using namespace std;

struct STR {

unsigned int a;

long double b;

};

void BinOut(unsigned char* Buf, int len) {

int i, j;

unsigned char byte;

for (i = len - 1; i >= 0; i--)

for (j = 1, byte = Buf[i]; j <= 8; byte <<= 1, j++)

putchar(byte & 0x80 ? '1' : '0');

printf("\n");

}
