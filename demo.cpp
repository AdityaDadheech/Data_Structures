#include<iostream>
using namespace std;

class IncreDecre{
    int a,b;

public:
    void accept(){
        cout<<"Enter two numbers :\n";
        cout<<" ";
        cin>>a;
        cout<<" ";
        cin>>b;
    }
    void operator--(){
        a--;
        b--;
    }

    void operator++(){
        a++;
        b++;
    }

    void display(){
        cout<<"\n A:"<<a;
        cout<<"\n B:"<<b<<endl;
    }
};

int main(){

    IncreDecre id;
    id.accept();
    --id;
    cout<<"Value of a and b after decrementing:"<<endl;
    id.display();
    ++id;
    cout<<"value of a and b after incrementing:"<<endl;
    id.display();
    return 0;
}
