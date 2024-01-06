// - Given an integer array and its size, reverse the array and print it . Here 1<size<101



#include<iostream>
using namespace std;

int main(){
    int array[]={3,7,25,2,11};
    int n=5;
    int arr[n];

    for(int i=0;i<n;i++){
       arr[i]=array[n-1-i];
    }

   
    cout<<"reverse of array is  : "<<endl;
    for(int element:arr){
        cout<<element<<" ";
    }
   

    return 0;

}