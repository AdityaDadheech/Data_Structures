#include<iostream>
using namespace std;

int fact(int n){
	if(n<=1){
		return n;
	}
	else{
		return fact(n-1)*n;
	}
}

int NCR(int n,int r){
	int num = fact(n);
	int deno = fact(r)*fact(n-r);
	return num/deno;
}

int pascalncr(int n, int r){
	if(r == 0 || r == n){
		return 1;
	}
	else{
		return pascalncr(n-1,r-1) + pascalncr(n-1,r);
	}
}

int main(){
	cout<<pascalncr(10,5);
	return 0;
}
