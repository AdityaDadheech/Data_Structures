#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct rectangle{
	int length;
	int breadth;
};

int main(){
	struct rectangle *p;
    p = new rectangle;
	p->length = 14;
	p->breadth = 3;
	cout<<p->length<<endl;
	cout<<p->breadth<<endl;
}

