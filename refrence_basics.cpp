#include<iostream>
using namespace std;

int main(){
	int a = 20;
	int &r = a;
	a = 120;
	cout<<a<<endl<<r<<endl;
}
