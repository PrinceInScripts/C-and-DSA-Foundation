//Binary to decimal

#include<iostream>
using namespace std;

int main(){
    int b_number,l_digit,ans=0,power=1;

    cout<<"Enter Binary  Number : ";
    cin>>b_number;
    int binary_num=b_number;

    while(b_number>0){  //1011>0
        l_digit=b_number % 10;            //l_digit=1011%10=1 =101%10=1 =10%10=0 =1
        ans+=l_digit*power;            //ans=0+1*1=1 =1+1*2=3  3+0*4=3 3+1*8=11
        power*=2;                      //d_number=2*1=2 =2*2=4 =8 =
        b_number/=10;                     //b_number=1011/10=101 =101/10=10 =10/10=1
    }

    cout<<"Decimal number of Binary "<<binary_num<<" number is "<<ans;

    return 0;


}