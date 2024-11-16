/*
Q1. Write a program to find how many times a function is being called (use local static variable as count)
*/
#include <stdio.h>
void myFunction()
{
	static int count = 0;
	count++;
	printf("Function called %d times.\n", count);
}
void main()
{
	int n;
	printf("Enter the no. of loops: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		myFunction();
	}
}
