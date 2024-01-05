/*
Problem 1t Given n, print a triangular pattern as shown in the example below.



Example if n=4

 z

 zz

 zzz

 zzzz
*/


#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
              cout<<"*";
        }
        cout<<endl;
    }
}




