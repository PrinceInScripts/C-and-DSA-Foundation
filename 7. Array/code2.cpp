//Find length of array using of sizeof operator

#include<iostream>
using namespace std;

int main(){
    int array[]={1,2,3,4};

    cout<<sizeof(array)<<endl;
   int size=sizeof(array)/sizeof(array[0]);

  //for loop
   for(int i=0;i<size;i++){
    cout<<array[i]<<endl;
   }

   //foreach
   for(int element:array){
    cout<<element<<endl;
   }

   //while loop
   int index=0;
   while(index<size){
    cout<<array[index]<<endl;
    index++;
   }
    return 0;
    
}