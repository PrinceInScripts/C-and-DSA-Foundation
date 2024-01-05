/*
Problem 3 t Given height h and width w, print a rectangular pattern as shown in the example below.

Examplet h=4,w=6


 * * *
  . . .
  
  * * *
 . . .
 * * *
  . . .
  * * *
 . . .

 */



#include<iostream>
using namespace std;

int main(){
    int r=4,c=6;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           if(j%2==0)
              cout<<"*";
            else
              cout<<".";
        }
        cout<<endl;
    }
}



