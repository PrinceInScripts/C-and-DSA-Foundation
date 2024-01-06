//Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
// a pair in the array whose absolute difference is exactly x.


#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m;
    cout<<"Enter size of vector : ";
    cin>>m;
    vector<int> arr(m);
   

    cout<<"Enter value in first vector"<<endl;
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }

    int x;
    cout<<"enter a element : ";
    cin>>x;
    bool result=false;

    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            if(arr[j]-arr[i]==x){
                result=true;
            }
        }
    }

    if(result){
        cout<<"yes";
    }else{
        cout<<"No";
    }
    
    return 0;

}