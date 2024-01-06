// Calculate the sum of all the elements in the given array 


#include<iostream>
using namespace std;

int main(){
    int array[]={1,2,3,4,5},sum=0;

    for(int element:array){
        sum+=element;
    }

    cout<<"sum is : "<<sum<<endl;

    return 0;

}