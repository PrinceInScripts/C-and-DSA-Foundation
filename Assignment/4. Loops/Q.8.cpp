/*
Q8 - Write a C++ program to print a triangle of prime numbers upto given number of lines of the triangle.

           2
          3 5
        7 11 13
      17 19 23 29
     31 37 41 43 47
   53 59 61 67 71 73
*/

#include<iostream>
using namespace std;

int main(){
    int n=6,a=n-1,b=0,c=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){
              cout<<"#";
        }
        a--;

        for(int j=1;j<=i;j++){
            b+=2;                     
            cout<<" "<<b<<" ";        
                              

        }
        b-=2;                         
        b=b+c;                       
        c++;                         
        cout<<endl;
    }
}