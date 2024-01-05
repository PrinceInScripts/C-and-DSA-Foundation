//Q9- Write a C++ program to check whether a Number can be expressed as a Sum of Two Prime Numbers.

#include<iostream>
using namespace std;

int isPrimeNumber(int num){
      for(int i=2;i<num/2;i++){
            if(num%i==0){
                return false;
            }
            
      }
      return true;
}

int main(){
     int n;
     bool check=false;
     cout<<"Enter a Number : ";
     cin>>n;

     for(int i=2;i<=n/2;i++){
        if(isPrimeNumber(i) && isPrimeNumber(n-i)){
            cout<<" can be expressed as the sum of two prime numbers: "<<i<<" and "<<(n-i) << endl;
            check=true;
        }
     }
     if(!check)
      cout << n << " cannot be expressed as the sum of two prime numbers." << endl;

    return 0;
}