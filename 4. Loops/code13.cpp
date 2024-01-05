/*
Problem 2w Given n, print a triangular pattern as shown in the example below.>
ExCmple if n=4

 ****
 ***
 **
 * 
 *
*/


#include<iostream>
using namespace std;

int main(){
    int n=4;
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
              cout<<"*";
        }
        cout<<endl;
    }
}




