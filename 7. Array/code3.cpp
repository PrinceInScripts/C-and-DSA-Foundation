//take input from user and print them

#include<iostream>
using namespace std;

int main(){
    char vowels[5];

    //for loop
    // for(int i=0;i<5;i++){
    //     cin>>vowels[i];
    // }

    //foreach
    for(char &element:vowels){
        cin>>element;
    }

    for(int i=0;i<5;i++){
        cout<<vowels[i]<<" ";
    }
}