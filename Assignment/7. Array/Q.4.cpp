//Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such
// that they belong to different arrays and are not at the same index. Here 1<size<101


#include<iostream>
using namespace std;

int main(){
    int a[5]={3,7,25,2,11}; 
    int b[5]={2,9,5,11,7}; 
    int sum=a[0]+b[1];
    

    for(int i=0;i<5;i++){
         for(int j=i+1;j<5;j++){
            if(a[i]+b[j]<sum){
                sum=a[i]+b[j];
            }
         }
    }

   
    cout<<"the sum of two element of diffenrt array on dieffent index  : "<<sum<<endl;
   

    return 0;

}