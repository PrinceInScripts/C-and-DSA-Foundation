//Given an integer array containing n elements. Find the element in the array for which all the elements
// to its left are smaller than it and all the elements to the right of it are larger than it. Here 1<n<101.



#include<iostream>
#include<climits>
using namespace std;

int findElement(int arr[],int N){
    int prefix[N];
    int suffix[N];

    prefix[0]=INT_MIN;
    suffix[N-1]=INT_MAX;

    for(int i=1;i<N;i++){
        prefix[i]=max(prefix[i-1],arr[i-1]);
    }

    for(int i=N-2;i>=0;i--){
        suffix[i]=min(suffix[i+1],arr[i+1]);
    }

    for(int i=0;i<N;i++){
        if(prefix[i]<arr[i] && arr[i] < suffix[i]){
            return arr[i];
        }
    }

    return -1;
      
}

int main(){
     const int N = 100;  // You can adjust the size as needed
    int arr[N];
    int n;

    cout << "Enter the size of the array (1 < n < 101): ";
    cin >> n;

    cout << "Enter " << n << " elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findElement(arr, n);

    if (result != -1) {
        cout << "The element satisfying the condition is: " << result << endl;
    } else {
        cout << "No such element found in the array." << endl;
    } 
   

    return 0;

}

