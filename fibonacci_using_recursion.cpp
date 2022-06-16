#include<iostream>
using namespace std;

int fib(int n){
	if (n<=1){
		return n;
	}
	else{
		return fib(n-2)+fib(n-1);
	}
}

int ifib(int n){
	int t0 = 0,t1 = 1,s = 0;
	if(n<=1){
		return n;
	}
	for(int i = 2;i<=n;i++){
		s = t0 + t1;
		t0 = t1;
		t1 = s;
	}
	return s;
}

int f[10];

int memoizationFib(int n){
	if(n<=1){
		return n;
	}
	else{
		if(f[n-2]==-1){
			f[n-2] = memoizationFib(n-2);
		}
		if(f[n-1] == -1){
			f[n-1] = memoizationFib(n-1);
		}
		return f[n-2]+f[n-1];
	}
}

int main(){
	int n;
	cout<<"Enter which term of fibonacci series do you want:";
	cin>>n;
	for(int i = 0;i<=n;i++){
		f[i] = -1;
	}
	cout<<memoizationFib(n);
	return 0;
}
