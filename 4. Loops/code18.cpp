/*
Problem 3 : Given n, print a traingular pattern as shown in the example below.
    1
   121
  12321
 1234321
*/


#include<iostream>
using namespace std;

int main(){
    int n=4,a=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){
              cout<<" ";
        }
        a--;
        for(int j=1;j<=i;j++){
              cout<<j;
        }

        int c=i-1;
		for(int j=1;j<=i-1;j++)
		{
			cout<<c;
			c--;
		}
        

        cout<<endl;
    }
}
