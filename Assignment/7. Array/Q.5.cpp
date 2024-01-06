//Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n) (inclusive of
// both 0 and n). Find and return the only number of the range that is not present in the array. Here 1<n<101.


#include<iostream>
using namespace std;

int main(){
    int array[]={8,6,4,2,3,5,0,1};
    int min=array[0],max=array[0],ans;
    int size=sizeof(array)/sizeof(array[0]);


    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
        }
        if(array[i]<min){
            min=array[i];
        }
    }

    for(int i=min;i<max;i++){
        if(!(i==array[i])){
           ans=i;
        }
    }

   
    cout<<"["<<min<<","<<max<<"]"<<endl;
    cout<<"number of the range that is not present in the array is : "<<ans<<endl;
   

    return 0;

}