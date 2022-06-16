#include<iostream>
using namespace std;

void swap(int &x,int &y){
	int temp = x;
	x = y;
	y = temp;
}
int main(){
	int num1 = 12;int num2 = 13;
	swap(num1,num2);
	cout<<num1<<endl<<num2;
} 
