//Find the second largest number 

#include<iostream>
#include<climits>
using namespace std;

int largestNumIndex(int arr[],int size){
    int max=INT_MIN;
    int maxIndex=1;
    for(int i = 0; i < size; i++){
        if(arr[i]>max){
            max=arr[i];
            maxIndex=i;
        }
    }
    return maxIndex;
}

int main(){
    int array[] = {2, 3, 5, 7, 6, 1,7};

     int indexOfLargest=largestNumIndex(array,7);
    //  array[indexOfLargest]=-1;
    int largestELement=array[indexOfLargest];
    for(int i=0;i<7;i++){
        if(array[i]==largestELement){
            array[i]=-1;
        }
    }

     int indexOfSecondLargest=largestNumIndex(array,7);

   
    cout << array[indexOfSecondLargest] << endl;

    return 0;
}