//Find the total number of pairs in the Array whose sum is equal to the given vale x

#include<iostream>
using namespace std;

int main(){
    int array[]={3,4,6,7,1};
    int targetSum=7;

    int size=5;

    int pairs=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]+array[j]==targetSum){
                pairs++;
            }
        }
    }

    cout<<pairs<<endl;
}