// Print the nth factorial number?

#include<iostream>
using namespace std;

int main(){
    int n,fact=1;
    cin>>n;
    for(int i=n;i>0;i--){
        fact*=i;
    }

    cout<<"Factprial of "<<n<<" is : "<<fact;
}