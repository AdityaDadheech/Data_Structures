#include<iostream>
#include<stdio.h>
using namespace std;

struct rectangle{
	int length;
	int width;
};
int main(){
	struct rectangle r1 = {10,5};
	r1.length = 15;
	r1.width = 7;
	cout<<r1.length<<endl;
	cout<<r1.width<<endl;
}
