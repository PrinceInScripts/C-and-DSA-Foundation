/*
Q5 - Given two numbers a and b, write a program to print all the prime numbers present between
a and b.
*/

#include<iostream>
using namespace std;

int isPrime(int num){
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            return 0;
        }
    }

    return 1;
}

int main(){
    int a,b;
    cout<<"Enter Two numbers : ";
    cin>>a>>b;

 
    cout<<"List of Prime number between "<<a<<" and "<<b<<" is : "<<endl;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
}