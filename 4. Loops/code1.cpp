// Print the sum of the first ‘n’ natural numbers using a while loop where n is the input.

#include<iostream>
using namespace std;

int main(){
    int n,i=1,sum=0;
    cout<<"Enter a number : ";
    cin>>n;

    while(n>=i)
    {
        sum+=i;
        i++;
    }
    cout<<"Sum of first natural number of "<<n<<" is : "<<sum;
    return 0;
    
}

