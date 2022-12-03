#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main() {
	long double n;
	char ar[111];
	cin >> n;
	sprintf(ar,"%LE",n);
	if(ar[0]!='-') cout <<"+";
	printf("%.4LE\n",n);
	return 0;
}
