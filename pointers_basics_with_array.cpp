#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main(){
	int *p;
	p = (int*)malloc(5*sizeof(int));
	p[0] = 2; p[1] = 5; p[2] = 8; p[3] = 9; p[4] = 10;
	for(int i = 0; i<5; i++){
		cout<<p[i]<<endl;
	}
}
