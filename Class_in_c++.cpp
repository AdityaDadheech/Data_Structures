#include<iostream>
using namespace std;

class Rect{	
public:	
	int length;
	int breadth;

void initialize (int l,int b){
	length = l;
	breadth = b;
}	
int area(){
	
	return length*breadth;
	
}

int perimeter(){
	
	return 2*(length+breadth);
	
}	
};

int main(){
	int l;
	int b;
	Rect r;
	cout<<"Enter the value of length and breadth:";
	cin>>l>>b;
	r.initialize(l,b);
	cout<<"Area of retangle is:"<<r.area();
	cout<<endl<<"perimeter of rectangle is:"<<r.perimeter();
	return 0;
}
