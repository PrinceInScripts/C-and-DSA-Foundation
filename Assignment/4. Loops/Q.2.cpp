//Q2 - Write a program to print all Armstrong numbers between 100 to 500.

#include<iostream>
using namespace std;
int main()
{
	for(int i=100;i<=500;i++)
	{
       int num=i,l_digit,result=0;
       while(num>0){
          l_digit=num%10;
          result=result+l_digit*l_digit*l_digit;
          num/=10;
       }
       if(i==result){
        cout<<i<<" is a armastrong number"<<endl;
       }
	}
	
    return 0;
}