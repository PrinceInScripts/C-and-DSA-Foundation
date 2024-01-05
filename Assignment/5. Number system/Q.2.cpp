//Q2 - Given a natural number, find the number of 0’s in the binary representation of that number.

#include<iostream>
using namespace std;

int main(){
    int num,l_digit,b_num=0,power=1,count=0;

    cout<<"Enter a number : ";
    cin>>num;
    int nat_num=num;
    while(num>0){
        l_digit=num%2;
        if(l_digit%2==0){
             count++;
        }
        b_num+=l_digit*power;
        power*=10;
        num/=2;
    }

    cout<<"the number of 0 in the binary "<<b_num<<" of that number "<<nat_num<<" is "<<count;

    return 0;


}