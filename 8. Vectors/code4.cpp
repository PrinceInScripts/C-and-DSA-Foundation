// Count the number of occurrences of a particular element x.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);

    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

     int x;
     cout<<"Enter x : ";
     cin>>x;

     int occurence=0;   

     for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurence++;
           
        }
     } 

     cout<<occurence<<endl;
}