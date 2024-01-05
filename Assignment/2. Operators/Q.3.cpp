/*
Q3 - There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many
girls received grades "A" if 17 boys made up 80% of the students that received grades "A".
*/

#include<iostream>
using namespace std;
int main()
{
	int totalGot80,boy,girlGot80;
	boy=17;
	totalGot80=(80*45)/100;
	girlGot80=totalGot80-boy;
	
	cout<<"girls received grades \"A\" : "<<girlGot80;
	
}