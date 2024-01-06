//Given a vector arr[] sorted in increasing order of n size and an integer x, find the number
// of unique pairs that exist in the array whose absolute sum is exactly x.


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

    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            if(arr[i]+arr[j]==x){
                cout<<"("<<arr[i]<<","<<arr[j]<<")";
            }
        }
    }

    return 0;

}