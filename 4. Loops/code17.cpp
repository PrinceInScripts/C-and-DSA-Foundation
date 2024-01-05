/*
Problem 3 : Given n, print a rectangular pattern as shown in the example below.
121212
212121
121212
212121
*/


#include<iostream>
using namespace std;

int main(){
    int r=4,c=6;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c/2;j++){
              if(i%2!=0){
                cout<<1<<2;
              }else
              {
                cout<<2<<1;
              }
        }
        cout<<endl;
    }
}
