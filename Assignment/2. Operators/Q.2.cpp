/*Write a program to take the values of two variables a and b from the keyboard and then check if
both the conditions 'a < 50' and 'a < b' are true.
*/

#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter Value of a : ";
	cin>>a;
	cout<<"Enter value of b : ";
	cin>>b;
	cout<<(((a<50) && (a<b))?1:0)<<endl;;
}