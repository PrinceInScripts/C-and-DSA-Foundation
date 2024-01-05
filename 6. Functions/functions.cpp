/*
Topic: Functions
A function is a block of code or collection of statements or a set of coded grouped to certain task or operation.

In C++, there are two types of Function
User-defined Functions: Here, we can create our own function based on the requirements. We will be
creating these in the exercises ahead.
Standard Library Functions: These are built-in pre-written functions that are directly available to use. We
just need to include the required header files to access and use them in our program.

Topic: How to declare Functions
The Function declaration provides information about the attributes, such as visibility, return type, name, and
arguments of functions. Do not worry, this is all a part of the syntax.

Defining a Function

 return_type function_name(parameter1, parameter2,	………)	{
 statements;
 }

 1. function_name : Each Function has its own name and it is identified by its name. Ideally, the function name should be given in such a way that it depicts the functionalityt utility of the function. Eg.area() to calculate area, sum() to perform addition etc.

2. Return type : It defines the data type of the value returned from a Function. If we want the function to return a value, we can use a data type (such as int, string, etc.), if the function does not return anything we can  simply use void.

3. Parameters: Parameters actually act as variables inside the Function. They are specified after the Function name, inside the parentheses. You can add as many parameters as you want, simply separate them with commas.

4. Function Body: It is a part of the Function declaration that contains the code for all the actions to be performed. It is enclosed within a pair of curly braces.

Topic: Calling a Function
To call a function, we write the function name followed by two parentheses () and a semicolon;g
[ Before calling a function, we must know the name of function that we are calling, the number of parameters
required and their data types and last but not the least, the return type to collect the value returned by the
function.
Note: As mentioned earlier, the execution of all C++ programs begins with the main function, regardless of
where the function is actually located within the code.
Example 1

 void welcome() {
 cout<<("Welcome to Physics Wallah");
 }
 int main(){
 welcome();
 }
Output: Welcome to Physics Wallah


Topic: Concept of scope of Variables
The scope of a variable is the part of a program where the variable is valid and can be legally accessed. Legal
? Yes, you read it right. The concept of scope is that precise.

Variables can be classifie in the following categories based on their scopes.
Local variables : variables that are declared inside a function block an can be accessed/used inside that
specific function block only. They are unknown entities outside the function.
Global variables : variables that are declared outside all blocks or functions in a program (generally at the
top of the program) and can be accessed/used anywhere in the program (i.e. their reach is not limite to a
block or function)

Topic: Parameter passing in a function- Pass by Value and Pass by Reference
Pass by value and pass by refernce are the two ways by which we can pass a value pr refernce to a function to perform some operation.
Pass by value : the function parameter values are copied to another variable.
Pass by reference : actual copy of variable refernce is passed to the function.

Example:
1. Pass by value
 void changeValue(int z) {
 z = 100;
 }
int main() {
 int a = 40;
 cout<<a;
 changeValue(a);
 cout<<a;
 }

Example 2. Pass by value
int add (int n1, int n2) //formal parameters
{
int ans = n1 + n2;
return ans;
}
int main()
{
int a, b, ans;
cout<<("Enter the first number: ")<< endl;
cin>>a;
cout<<("Enter the second number: ")<< endl;
cin>>b;
ans = add(a, b); //actual parameters
cout<<("The sum of two numbers a and b is: ")<< ans << endl;
}


Topic: Pass by reference:
In the example above, we are passing two values a and b (entered by the user) in a function ‘add’ as n1 and n2. 
The value of sum is saved in variable ans and this value is returned from add function to ‘ans’ variable in 
main().
Parameter passing ‘by reference’ means that we pass the reference to the actual variables rather than passing 
just the value (as we did in ‘passing by value’).
To access the address/reference of any variable, we use the "&" operator. Look at the example below to 
understand the use of ‘&’ operator and its use in passing by reference.

#include <iostream>
using namespace std;
void swap(int &a, int &b) 
{
 int c = a;
 a = b;
 b = c;
}
int main() 
{
 int num1 = 20;
 int num2 = 32;
 cout << "Before swap: " << "\n";
 cout << num1 <<" "<< num2 << "\n";
 swap(num1, num2);
 cout << "After swap: " << "\n";
 cout << num1 <<" "<< num2 << "\n";

 return 0;

}

Output:
Before swap: 
20 32
After swap: 
32 20

Topic :Default parameter/argument value
A default argument is a value in the function declaration assigned automatically by the compiler if the calling 
function does not pass any value to that argument.
If a function with default arguments is called without passing arguments, then the default parameters are 
used. However, if arguments are passed while calling the function, the default arguments are ignored.

#include <iostream>
using namespace std;
int add(int a, int b, int c = 0, int d = 10) 
{
	return (a + b + c + d);
}
// Driver Code
int main()
{
	cout << add(30, 20) << endl;
	cout << add(10, 20, 30) << endl;	
	cout << add(5, 20, 35, 50) << endl;
	return 0;

}

Output:
60
70
110


*/