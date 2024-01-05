/* Problem 2: Print a rectangular pattern as shown in the example below.
123456
1    6
1    6
123456


*/

#include<iostream>
using namespace std;

int main(){
    int r=4,c=6;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=6;j++){
              if(i==1 || i==r || j==1 || j==c){
                cout<<j;
              }else{
                cout<<" ";
              }
        }
        cout<<endl;
    }
}
