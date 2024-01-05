// Problem 1: Count the number of digits in the given number n

#include<iostream>
using namespace std;

int main(){
    int n,count=0;
    cout<<"Enter a number : ";
    cin>>n;
    int num=n;

    while(n > 0)  {  //n=123 123>0 n=12>0 1
        count++;     //count=0+1 +1
        n/=10;       //123/10 n=12/10 1
    }

    cout<<"total digit in number "<<num<<" is "<<count;

    return 0;

}
