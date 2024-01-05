/*
Q3 - Given the age of a person, write a function to check if the person is eligible to vote or not.
*/

#include<iostream>
using namespace std;
int voteEligbility(int age);

int main()
{
	int age;
	cout<<"Enter Your Age : ";
	cin>>age;
	
	int op=voteEligbility(age);
	
	if(op==1){
		cout<<"You are Eligible For Vote";
	}
	else
	{
		cout<<"You are Not Eligible For Vote";
	}
	
	return 0;
	
}

int voteEligbility(int age)
{
	if(age>18)
	 return 1;
	else 
	 return 0;
}
