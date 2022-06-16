#include<iostream>
using namespace std;

struct Rectangle{
	int length;
	int breadth;
};
int main(){
	struct Rectangle r = {10,5};
	struct Rectangle *p = &r;
	
	r.length = 15;
	cout<<r.length<<endl<<p->length<<endl;
	(*p).length = 20;
	cout<<(*p).length;
}
