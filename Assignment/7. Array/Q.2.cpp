//Given an integer array and its size, find the sum of the greatest and the smallest integer present in the array. Here 1< size <101


#include<iostream>
using namespace std;

int main(){
    int array[]={3,7,25,2,11};
    int n=5,min=array[0],max=array[0];

    for(int i=0;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
        if(array[i]<min){
            min=array[i];
        }
    }

   
    cout<<"the sum of the greatest and the smallest integer present in the array is  : "<<max+min<<endl;
   

    return 0;

}