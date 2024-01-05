//Problem 2: Find the sum of digits in a given number nW

#include<iostream>
using namespace std;

int main(){
     int n,sum_digit=0,l_digit;
    cout<<"Enter a number : ";
    cin>>n;
    int num=n;

    while(n>0){                    //n=123>0 =12>0 =1>0 =0>0
        l_digit=n%10;              //l_digit=123%10=3 =12%10=2 =1%10=1
        sum_digit+=l_digit;        //sum_digit=0+3+2+1
        n/=10;                     //n=123/10=12 =12/10=1 =1/10=0
    }

    cout<<"total digit in number "<<num<<" is "<<sum_digit;

    return 0;
}