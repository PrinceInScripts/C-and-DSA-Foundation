//taking vector value from user and print them using loop


#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

//for loop
    for(int i=0;i<5;i++){
        int element;
        cin>>element;

        v.push_back(element);
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;

    v.insert(v.begin()+2,9);

//foreach loop
    for(int element: v){
        cout<<element<<" ";
    }
    cout<<endl;

    v.erase(v.end()-2);

//while loop

   int i=0;
   while(v.size()>i){
    cout<<v[i++]<<" ";
   }
}