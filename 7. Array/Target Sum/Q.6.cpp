//Rotate the given array ‘a’ by k steps, where k is non-negative.
// Note: k can be greater than n as well where n is the size of array ‘a’.


#include<iostream>
#include<climits>
using namespace std;

int main(){
    int array[] = {1,2,3,4,5};
    int n = 5;
    int k=4;
    
    k%=n;

    int ansArray[n];

   int j=0;
    for(int i = n-k; i < n; i++){
       ansArray[j++]=array[i];
    }

    for(int i = 0; i <=k; i++){
       ansArray[j++]=array[i];
    }
    for(int i = 0; i < n; i++){
       cout<<ansArray[i]<<" ";
    }

    

    return 0;
}