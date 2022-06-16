#include<iostream>
#include<stdlib.h>
using namespace std;

struct rectangle{
	int length;
	int breadth;
}; 

struct rectangle* fun(){
	struct rectangle *p;
	p = new struct rectangle;
	p->length = 12;
	p->breadth = 15;
	
	return p ;
}

int main(){
	struct rectangle *ptr = fun();
	cout<<"Length "<<ptr->length<<endl<<"breadth "<<ptr->breadth<<endl;
	return 0;
}
