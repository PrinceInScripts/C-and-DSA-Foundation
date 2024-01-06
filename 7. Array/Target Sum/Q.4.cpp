//Find the second largest number 

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int array[] = {2, 3, 5, 7, 6, 1};
    int max = INT_MIN;
    int smax=INT_MIN;
    int size = 6;

   
    for(int i = 0; i < size; i++){
        if(array[i]>max){
            max=array[i];
        }
    }

    for(int i = 0; i < size; i++){
        if(array[i]>smax && array[i]!=max){
            smax=array[i];
        }
    }

    cout << smax << endl;

    return 0;
}