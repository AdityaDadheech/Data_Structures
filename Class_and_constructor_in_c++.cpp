#include<iostream>
using namespace std;

class Rectangle{
private:
	int length;
	int Breadth;
	
public:
    Rectangle(){
    	length = 0;
    	Breadth = 0;
	}
	Rectangle(int l,int b){
		length = l;
		Breadth = b;
	}
	int area(){
		return length*Breadth;
	}
	int Perimeter(){
		return 2*(length+Breadth);
	}
	void setLength(int l){
		length = l;
	}
	void setBreadth(int b){
		Breadth = b;
	}
	int getLength(){
		return length;
	}
	int getBreadth(){
		return Breadth;
	}
	~Rectangle(){
		cout<<"Destructor";
	}
};

int main(){
	int l,b;
	cout<<"Enter Length and Breadth:"<<endl;
	cin>>l>>b;
	Rectangle r(l,b);
	cout<<"Area:"<<r.area()<<endl;
	cout<<"Perimeter:"<<r.Perimeter()<<endl;
}
