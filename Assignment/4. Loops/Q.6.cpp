/*
Q6- Write a program to print alphabet diamond pattern:

     ####A####
     ###ABC###
     ##ABCDE##
     #ABCDEFG#
     ABCDEFGHI
     #ABCDEFG#
     ###ABCDE##
     ###ABC###
     ####A####
*/

#include<iostream>
using namespace std;

int main(){
    int n=5, a=n-1,b=n+2;
   
    for(int i=1;i<=n;i++){
        for(int j=a;j>0;j--){
            cout<<" ";
        }
        a--;
        char alpha='A';
        for(int j=1;j<2*i;j++){
            cout<<alpha;
            alpha++; 
        }
        cout<<endl;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
         char alpha='A';
        for(int j=1;j<=b;j++){
            cout<<alpha;
            alpha++; 
        }
        b-=2;
        cout<<endl;
    }
}