//Find the last occurrence of an element x in a given array

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

     int occurence;
    //  for(int i=0;i<v.size();i++)
    //  {
    //     if(v[i]==x){
    //         occurence=i;
    //     }
    //  }

     for(int i=v.size()-1;i>=0;i--)
     {
        if(v[i]==x){
            occurence=i;
            break;
        }
     }
     
     cout<<occurence<<endl;

    

}