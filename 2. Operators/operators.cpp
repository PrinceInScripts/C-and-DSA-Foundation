/*
Operators
Operators are the symbols that are used to perform pre-defined operations on variables and values.

Operators in C++ can be classified into 6 types:
1. Arithmetic Operators
2. Relational Operators
3. Logical Operators
4. Assignment Operators
5. Bitwise Operators
6. Misc Operators

1. Arithmetic Operators
Arithmetic operators are used in mathematical expressions in a program. They function in the same way
as they do in algebra.

#include<iostream>
using namespace std;
int main(){
---------declare variables p and q--------
 int p = 20, q = 10;
 int result;
---------- addition operator-----------
 result=p+q;
 cout<<(result);
---------subtraction operator----------
 cout<<(p - q); 
---------multiplication operator-------
cout<<(p * q);
----------division operator----------
 cout<<(p / q);
---------modulo operator----------
 cout<<(p % q);
 }


2. Relational Operators
#include<iostream>
 using namespace std;
 int main()
{
// create variables
int p = 10, q = 15; 
// == operator
cout<<(p == q); // false
// != operator
cout<<(p != q); // true
// > operator
cout<<(p > q); // false
// < operator
cout<<(p < q); // true
// >= operator
cout<<(p >= q); // false
// <= operator
cout<<(p <= q); // true 
}
Output: false
 true
 false
 true
 false
 true

3. Logical Operators
Logical operators are used for decision making. This class of operators is used to check whether an expression is
true or false. 
#include<iostream>
using namespace std;
int main(){
 // && operator
 int p=15,q=10,r=5;
 cout<<((p > q) && (p > r)); // true
 cout<<((p > q) && (p < r)); // false
 // || operator
 cout<<((r < q) || (p < q)); // true
 cout<<((p > q) || (q > r)); // true
 cout<<((p < q) || (p < r)); // false
 // ! operator
 cout<<(!(p == q)); // true
 cout<<(!(p > q)); // false
 }


4. Assignment Operators
The assignment operator = assigns the value of its right-hand operand to a variable, a property, or an indexer
element given by its left-hand operand

#include<iostream>
using namespace std;
int main(){
 int p = 10;
 int q;
 // assign value using =
 q = p;
 cout<<(q); // value of q is 10
 // assign value using =+
 q += p;
 cout<<(q); // value of q is 20
 // assign value using =* 
 q *= p;
 cout<<(q); // value of q is 200
 }
}

5. Bitwise Operators

#include<iostream>
using namespace std;
int main(){
 // initialize p
 int p = 5;
 cout<<(p<<2); 
 // Shifting the value of p towards the left two positions
 }
 }
 
6. Misc Operators
*/