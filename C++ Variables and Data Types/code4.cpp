#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter a Number : ";
    cin>>a;
    cout<<"Enter another Number : ";
    cin>>b;

    cout<<"Before swapping : "<<"a : "<<a<<","<<"b : "<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"Before swapping : "<<"a : "<<a<<","<<"b : "<<b<<endl;
    return 0;
}