//Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.

#include<iostream>
using namespace std;

int main(){
    int array[]={3,7,18,9,11};
    int n=5,e_count=0,o_count=0;

    for(int i=0;i<n;i++){
        if(array[i]%2==0){
            e_count++;
        }else{
            o_count++;
        }
    }

   
    cout<<"Even number in array : "<<e_count<<endl;
    cout<<"Odd number in array : "<<o_count<<endl;

    return 0;

}