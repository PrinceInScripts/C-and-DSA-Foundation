//Find the difference between the sum of elements at even indices to the sum of elements at odd indices.


#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,7,4,5,6};
    int sum=0;
    
    for(int i=0;i<7;i++){
        if(i%2==0){
            sum+=arr[i];
        }else{
            sum-=arr[i];
        }
    }

    cout<<sum<<endl;
}