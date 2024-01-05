//Q3 - Given two binary numbers, return the greatest of these numbers in decimal format.

#include<iostream>
using namespace std;

int binaryToDecimal(int num){
    int dec_num=0,l_digit,power=1;

    while(num>0){
        l_digit=num%10;
        dec_num+=l_digit*power;
        power=power*2;
        num/=10;
    }

    return dec_num;

}

int main(){
    int b_number1,b_number2;

    cout<<"Enter a Binary  Number : ";
    cin>>b_number1;
    cout<<"Enter another Binary  Number : ";
    cin>>b_number2;

    if(binaryToDecimal(b_number1)>binaryToDecimal(b_number2)){
        cout<<binaryToDecimal(b_number1);
    }else
      cout<<binaryToDecimal(b_number2);

    
}