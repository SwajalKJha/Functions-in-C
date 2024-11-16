/*
Q10. Function Pointers
- Write a simple program to test function pointer
- typedef for function pointer
typedef int (*pftype)( );
pftype pf1;
(or) typedef int (*pftype)(int, int);

pf1=sum; pf1(10,20);
- Menu driven programs without if,else,switch(array of function pointers)
- Rewrite this code using typedef
*/

/* EXAMPLE CODE
#include<stdio.h>
typedef struct employee{
	int age;
	char name[20];
	int salary;
} infoEmp; //infoEmp is typedef name
void main()
{
	//use of typedef
	// typedeg <datatype> <newName>
	typedef int myInt; //myInt is typedef name
	myInt a;
	myInt b;

	typedef int dimension; //dimension is typedef name
	dimension breadth;
	dimension widht;
	dimension height;

	typedef int* myPtr; //myPtr is typedef name
	myPtr p1, p2,p3;

	infoEmp var_1;
	infoEmp arr1[10];

	typedef int myArr[10]; //myArr is typedef name
	myArr arr2;
}
*/

#include <stdio.h>

void sum(int, int);
void sub(int, int);

void main()
{
	// Creates pointer to a function
	void (*fptr)(int, int);
	int a = 10, b = 20;

	// Method 1
	fptr = &sum;
	// sum(a,b);
	fptr(a, b);

	// typedef name for function pointer
	typedef int (*fun_ptr)(int, int);
	fun_ptr fp1, fp2, fp3;

	// Method 2
	sub(a, b);
	fp1 = sub;
	int result = fp1(a, b);
	printf("the result of subtraction = %d\n", result);
}

void sum(int a, int b)
{
	printf("Sum = %d\n", a + b);
}
void sub(int a, int b)
{
	return a - b;
}
