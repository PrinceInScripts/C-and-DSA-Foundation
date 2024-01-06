//Search if a given element is present in the array or not. if it is not present then return -1 elese return the index.

#include<iostream>
using namespace std;

int main(){
    int array[5]={2,6,18,9,10};

    int size=sizeof(array)/sizeof(array[0]);
    int find=6;
    int ans=-1;

    for(int i=0;i<size;i++){
        if(array[i]==find){
            ans=i;
        }
    }

    cout<<ans<<endl;

}