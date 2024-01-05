//Given 2 number a and b .Find a raise to the power b;

#include<iostream>
using namespace std;

int main(){
    int a,b,ans=1;
    cin>>a>>b;

    for(int i=1;i<=b;i++){
        ans*=a;
    }

    cout<<"Value of "<<a<< "raise to the power "<<b<<" is : "<<ans;

}
