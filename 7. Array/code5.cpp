//Find the maximum value out of all the element in the array;

#include<iostream>
using namespace std;

int main(){
    int array[]={3,7,18,9,11};
    int max=array[0];

    int size=sizeof(array)/sizeof(array[0]);
   /*
    for(int i=0;i<size;i++){  
        for(int j=i+1;j<size;j++){
            if(max<array[j]){   //2>1 
                max=array[j];               //max=2
            }
        }
    }
    */
   for(int i=0;i<size;i++){  
       if(array[i]>max){
        max=array[i];
       }
    }
   
    cout<<"Maximum number in array : "<<max<<endl;

    return 0;

}