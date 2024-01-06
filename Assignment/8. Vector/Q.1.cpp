//Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the
// two arrays into a single sorted array of size m+n.


#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter size of vector of two array : ";
    cin>>m>>n;
    vector<int> arr1(m);
    vector<int> arr2(n);

    cout<<"Enter value in first vector"<<endl;
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    cout<<"Enter value in another vector"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }

    vector<int> result;
    int i=0,j=0;

    while(i<m && j<n){
        if(arr1[i]<=arr2[j]){
            result.push_back(arr1[i]);
            i++;
        }else{
            result.push_back(arr2[j]);
            j++;
        }
    }

    while(i<m){
        result.push_back(arr1[i]);
        i++;
    }

    while(j<n){
        result.push_back(arr2[j]);
        j++;
    }

    cout << "Merged Sorted Vector:" << endl;
    for (int el : result) {
        cout << el << " ";
    }

    return 0;

}