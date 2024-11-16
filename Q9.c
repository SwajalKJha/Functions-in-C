/*
Q9. Can you return arrays from a function
(a) base address
(b) whole array
*/
#include <stdio.h>

int *returnArray();

void main()
{
	int *ptr;
	ptr = returnArray();
	printf("Base Address = %p\n", ptr);

	for (int i = 0; i < 5; i++)
	{
		printf("%d\t", ptr[i]);
	}
}

int *returnArray()
{
	static int arr[5] = {1, 2, 3, 4, 5};
	return arr;
}
