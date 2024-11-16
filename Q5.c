/*
Q5. Write a single function to return sum, product of two no.s
*/
#include <stdio.h>
#include <stdlib.h>
int *fun(int a, int b);
int arr[2];

void main()
{
        float num1, num2;
        printf("Enter first number:");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);

        int *ptr = fun(num1, num2);
        if (ptr != NULL)
        {
                printf("Sum: %d\n", ptr[0]);
                printf("Product: %d\n", ptr[1]);
                free(ptr); // Free the allocated memory
        }
}
// void fun(int a, int b)
//{
//       arr[0] = a+b;
//       arr[1] = a*b;
//       return arr;
// }

int *fun(int a, int b)
{
        int *ptr = (int *)malloc(2 * sizeof(int));
        if (ptr == NULL)
        {
                return NULL;
        }
        *ptr = a + b;
        *(ptr + 1) = a * b;
        return ptr;
}
