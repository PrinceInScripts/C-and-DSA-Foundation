//Problem 3: Reverse the digits of a number.


#include<iostream>
using namespace std;

int main(){
     int n,rev_num=0,l_digit;
    cout<<"Enter a number : ";
    cin>>n;
    int num=n;

    while(n>0){                                              //n=123>0 =12>0 =1>0 =0>0
        l_digit=n%10;                                        //l_digit=123%10=3 =12%10=2 =1%10=1
        rev_num=rev_num*10+l_digit;                          //rev_num=0*10+3 =3*10+2=32*10+1=321
        n/=10;                                               //n=123/10=12 =12/10=1 =1/10=0
    }

    cout<<"reverse of number "<<num<<" is "<<rev_num;

    return 0;
    }