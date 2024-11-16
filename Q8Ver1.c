/*
Q8. Passing 1D, 2D arrays to a function – sum, min, max of array elements
*/

#include <stdio.h>
int sum(int *ptr, int n);
void min_max(int *ptr, int n, int *min, int *max);
int s;
int main()
{
	int a[100], b, n, min, max, avg;
	printf("enter a size of array:");
	scanf("%d", &n);
	int *ptr;
	ptr = a;

	for (int i = 0; i < n; i++)
	{
		printf("enter element %d:", i + 1);
		scanf("%d", ptr + i);
	}

	sum(a, n);
	avg = s / n;
	min_max(a, n, &min, &max);

	printf("sum of given number is =%d\n", s);
	printf("average of given number is =%d\n", avg);
	printf("mininum of given number is =%d\n", min);
	printf("maximum of given number is =%d\n", max);

	return 0;
}

// function to perform addition of array elements
int sum(int *ptr, int n)
{
	for (int i = 0; i < n; i++)
	{
		s += *(ptr + i);
	}
	return s;
}

// function to perform maximum and minimum numbers in array
void min_max(int *ptr, int n, int *min, int *max)
{
	*min = *ptr;
	*max = *ptr;

	for (int i = 0; i < n; i++)
	{

		if (*(ptr + i) < *min)
		{
			*min = *(ptr + i);
		}

		if (*(ptr + i) > *max)
		{
			*max = *(ptr + i);
		}
	}
}
