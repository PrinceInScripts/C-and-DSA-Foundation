//Problem 1: Find the sum of the following series
// 1 - 2 + 3 - 4 … n

//1 + 3 +..... -2 -4 -.......

#include<iostream>
using namespace std;

int main(){
    int n,sum=0,odd_sum=0,even_sum=0;

    cout<<"enter a number : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        if(i%2==0){
             even_sum+=i;
        }
        else{
            odd_sum+=i;
        }
    }

   if(odd_sum>even_sum)
     sum=odd_sum-even_sum;
   else
     sum=even_sum-odd_sum;


    cout<<"Sum of these seires is "<<n<<" is "<<sum;

    return 0;
    
}