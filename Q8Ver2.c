/*
Q8. Passing 1D, 2D arrays to a function – Matrix operations
*/

#include <stdio.h>
#define MAX 100
int i, j, k, result[MAX][MAX];

// function declarations
void add(int arr1[][MAX], int arr2[][MAX], int row1, int col1);
void sub(int arr1[][MAX], int arr2[][MAX], int row1, int col1);
void mul(int arr1[][MAX], int arr2[][MAX], int row1, int col1, int row2, int col2);
int main()
{

	int arr1[MAX][MAX], arr2[MAX][MAX];
	int row1, col1, row2, col2, choice;

	// user input for first matrix
	printf("Enter no of rows in matrix 1:");
	scanf("%d", &row1);
	printf("Enter no of columns in matrix 1:");
	scanf("%d", &col1);
	printf("Enter elements :");
	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < col1; j++)
		{
			scanf("%d", &(arr1[i][j]));
		}
	}

	// user input for second matrix
	printf("Enter no of rows in matrix 2:");
	scanf("%d", &row2);
	printf("Enter no of columns in matrix 2:");
	scanf("%d", &col2);
	printf("Enter elements :");
	for (i = 0; i < row2; i++)
	{
		for (j = 0; j < col2; j++)
		{
			scanf("%d", &(arr2[i][j]));
		}
	}

	printf("Which Operation you want to perform :\n");
	printf("1.Addition of two matrices\n");
	printf("2.subtraction of two matrices\n");
	printf("3.multiplication of two matrices\n");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		if (row1 != row2 || col1 != col2)
		{
			printf("Addition not possible. Matrices must have the same dimensions.\n");
		}
		else
		{
			add(arr1, arr2, row1, col1);
		}
		break;
	case 2:
		if (row1 != row2 || col1 != col2)
		{
			printf("subtraction not possible. Matrices must have the same dimensions.\n");
		}
		else
		{
			sub(arr1, arr2, row1, col1);
		}

		break;
	case 3:
		if (col1 != row2)
		{
			printf("Multiplication not possible. for multiplicaton, columns of first matrix must be equal to rows of second matrix");
		}
		else
		{
			mul(arr1, arr2, row1, col1, row2, col2);
		}
		break;
	default:
		printf("Please enter valid choice");
	}
	return 0;
}

// function to perform addition of two matrices
void add(int arr1[][MAX], int arr2[][MAX], int row1, int col1)
{
	for (i = 0; i < row1; i++) // loop through each row
	{
		for (j = 0; j < col1; j++) // loop through each column
		{
			printf("%d\t\t", arr1[i][j] + arr2[i][j]); // Print the sum of corresponding elements
		}
		printf("\n");
	}
}

// function to perform subtraction of two matrices
void sub(int arr1[][MAX], int arr2[][MAX], int row1, int col1)
{
	for (i = 0; i < row1; i++) // loop through each row
	{
		for (j = 0; j < col1; j++) // loop through each column
		{
			printf("%d\t\t", arr1[i][j] - arr2[i][j]); // Print the subtraction of corresponding elements
		}
		printf("\n");
	}
}

// function to perform multiplication of two matrices
void mul(int arr1[][MAX], int arr2[][MAX], int row1, int col1, int row2, int col2)
{
	for (i = 0; i < row1; i++) // loop through each row
	{
		for (j = 0; j < col2; j++) // loop through each column
		{
			result[i][j] = 0;
			for (k = 0; k < col2; k++)
			{
				result[i][j] = result[i][j] + arr1[i][k] * arr2[k][j]; // Print the multiplication of corresponding elements
			}
			printf("%d\t\t", result[i][j]);
		}
		printf("\n");
	}
}
