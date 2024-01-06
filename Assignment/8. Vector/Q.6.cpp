// Given a vector array nums, print the count of triplets [nums[i], nums[j], nums[k]] such
// that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == x. Where k is an integer
// given by the user.



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
            for(int k=j+1;k<m;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                     cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")";
                }
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