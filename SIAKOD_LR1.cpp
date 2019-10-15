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

void BinIn(unsigned char* Buf, int len) {

int i, j;

char ch;

for (i = len - 1; i >= 0; i--)

for (j = 1, Buf[i] = 0; j <= 8; Buf[i] = (Buf[i] << 1) + (ch - '0'), j++) {

while ((ch = getchar()) != '0' && ch != '1');

putchar(ch);

}

printf("\n");

}

int main() {

setlocale(LC_ALL, "RUS");

STR str;

cout << "Введите unsigned int a: ";

cin >> str.a;

cout << "Двоичное значение: ";

BinOut((unsigned char*)&str.a, sizeof(str.a));

cout << "Введите long double b: ";

cin >> str.b;

cout<<"Двоичное значение: ";

BinOut((unsigned char*)&str.b, sizeof(str.b));

cout<<endl;

cout<<"Для проверки введите двоичное значение unsigned int a: ";

BinIn((unsigned char*)&str.a, sizeof(str.a));

cout<<"Результат: "<<str.a<<endl;

cout<<"Для проверки введите двоичное значение lomg double b: ";

BinIn((unsigned char*)&str.b, sizeof(str.b));

cout<<"Результат: "<<str.b<<endl;

}
