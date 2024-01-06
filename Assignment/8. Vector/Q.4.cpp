// Given a vector arr[] sorted in increasing order. Return an array of squares of each
// number sorted in increasing order. Where size of vector 1<size<101.



#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m;
    cout<<"Enter size of vector 1<size<101 : ";
    cin>>m;
    vector<int> arr(m);
   

    cout<<"Enter value in vector"<<endl;
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }

    vector<int> result;
    for(int i = 0; i < m; i++){
        result.push_back(arr[i] * arr[i]);
    }

    // Sort the new vector in increasing order
    for(int i = 0; i < m - 1; i++){
        for(int j = 0; j < m - i - 1; j++){
            if(result[j] > result[j + 1]){
                swap(result[j], result[j + 1]);
            }
        }
    }

    for(int el:result){
        cout<<el<<" ";
    }
    
    return 0;

}