/*
Q6. Whats wrong in this code, any fixes to the problem?
int* test(int x)
{
int y=x*x;
return &y;
}

//---------------------------------------------
#include<stdio.h>
void main()
{
	int* test(int x)
	{
	int y=x*x;
	return &y; // warning: function returns address of local variable [-Wreturn-local-addr]

	}
}
*/

#include <stdio.h>

int test(int x)
{
	return x * x; // Return the square directly
}

int main()
{
	int result = test(5);
	printf("Square: %d\n", result);
	return 0;
}
