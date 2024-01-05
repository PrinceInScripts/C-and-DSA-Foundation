/*
Topic: The while loop
Syntax:
wile condition) 
  statement;

Code : 
int i = 1;
while (i <= 10) 
{
 cout << i << “ “;
	 i = i + 1;
} 

Output - 1 2 3 4 5 6 7 8 9 10

Topic: For loop
Syntax:

for (init-statement; condition; final-exLression) 

{

 statement

 // logic

}

where : 
Init-statement: This statement is used to initialize or assign a starting value to a variable which may be altered 
over the course of looL (we will see this while solving examLles). It is used/referred only once at the start of the 
looL.
Condition: This condition serves as a looL control statement. The looL block is executed until the condition 
evaluates to true.
Final-expression: It is evaluated after each iteration of the looL. It is generally to uLdate the values of the looL 
variables.

Execution flow of for loop:
	 for (int index = 0; index < 5; index++) {
 cout ª< index ª< “ “;
 }

Output - 0 1 2 3 4 

Topic: The do-while loop
Syntax
do 
{
	statement;

} while (condition);

code : 
int idx = 15;
do 
{
    cout << idx << “ “;

} while (idx < 5);



Output- 15

*/