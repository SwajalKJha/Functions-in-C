// Q2. Try register storage class for local, global variables. Can we get address of register variable
#include <stdio.h>
void func(int);
int global_var = 1000;
void main()
{
	int local_var;
	printf("This is local variable in main function before taking input = %d\n", local_var);
	printf("This is global variable in main function before taking input = %d\n", global_var);
	printf("\n");

	printf("Enter value of local variable: ");
	scanf("%d", &local_var);
	printf("Enter value of global variable: ");
	scanf("%d", &global_var);
	printf("\n");

	printf("This is local variable in main function = %d\n", local_var);
	printf("This is global variable in main function = %d\n", global_var);
	printf("\n");
	func(local_var);
}

void func(int local_var)
{
	printf("This is local variable in another function = %d\n", local_var);
	printf("This is global variable in another function = %d\n", global_var);
	printf("\n");
}
