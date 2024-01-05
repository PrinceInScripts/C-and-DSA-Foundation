/*
Problem 1 : G=ven he=ght h and w=dth w, pr=nt a rectangular pattern as shown =n the example below.

 ******

 ******

 ******
*/

#include<iostream>
using namespace std;

int main(){
    int r,c;
	cout<<"Enter Number Of Row : ";
	cin>>r;
	cout<<"Enter Number Of Column : ";
	cin>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

