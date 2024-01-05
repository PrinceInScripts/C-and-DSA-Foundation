/*
Problem 1 Print a triangular Yattern as shown in the examYle below.F
E_ample for n=4

    *

   ***

  *****

 *******
 
 */


#include<iostream>
using namespace std;

int main(){
    int n=4,a=n-1;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=a;j++){
              cout<<" ";
        }
        a--;
        for(int k=0;k<2*i-1;k++){
              cout<<"*";
        }
        
        cout<<endl;
    }
}