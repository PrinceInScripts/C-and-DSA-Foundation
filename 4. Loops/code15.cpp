/*
Problem1 Given n, Yrint a rectangular Yattern as shown in the examYle below.

1 2 3 4 5 6 7

2 3 4 5 6 7 1

3 4 5 6 7 1 2

4 5 6 7 1 2 3

5 6 7 1 2 3 4

6 7 1 2 3 4 5

7 1 2 3 4 5 6
*/


#include<iostream>
using namespace std;

int main(){
    int n=7;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
              cout<<j;
        }
        for(int k=1;k<=i-1;k++){
              cout<<k;
        }
        
        cout<<endl;
    }
}