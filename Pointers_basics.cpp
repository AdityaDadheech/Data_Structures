#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int a = 10;
	int *p;
	p = &a;
	printf("%d",a,"\n");
	cout<<endl;
	printf("using pointers %d",*p);
}
