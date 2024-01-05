//Q1 - Print the sum of the first 5 decimal numbers from 1 to 5 in binary format.


#include<iostream>
using namespace std;

int main(){
    int sum=0;
    for(int i=1;i<=5;i++){
        sum+=i;
    }

     int d_number=sum,l_digit,ans=0,power=1;

    
    int decimal_num=d_number;

    while(d_number>0){
        l_digit=d_number%2;
        ans+=l_digit*power;
        power*=10;
        d_number/=2;
    }

     cout<<"Binary number of Decimal "<<decimal_num<<" number is "<<ans;

    return 0;
}