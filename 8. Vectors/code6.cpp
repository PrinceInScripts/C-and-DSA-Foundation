//Check if the given array is sorted or not.

#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,7,4,5,6};
    bool sorted=true;
    
    for(int i=0;i<6;i++){
        if(arr[i]<=arr[i-1]){
             sorted=false;
        }
    }

    if(sorted){
        cout<<"array is sorted"<<endl;
    }else{
        cout<<"array is not sorted"<<endl;
    }

}