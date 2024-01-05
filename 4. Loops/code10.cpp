/*
Problem 2 : G=ven he=ght h and w=dth w, pr=nt a rectangular pattern as shown =n the example below.
******
*    *
*    *
******
*/


#include<iostream>
using namespace std;

int main(){
    int r=4,c=6;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           if(i==0 || i==r-1 || j==0 || j==c-1)
              cout<<"*";
            else
              cout<<" ";
        }
        cout<<endl;
    }
}

