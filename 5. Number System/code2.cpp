//Decimal to Binary Number

#include<iostream>
using namespace std;

int main(){
     int d_number,l_digit,ans=0,power=1;

    cout<<"Enter Binary  Number : ";
    cin>>d_number;
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


