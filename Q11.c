/*
Q11. Function Pointers
- Write a simple program to test function pointer
- typedef for function pointer
typedef int (*pftype)( );
pftype pf1;
(or) typedef int (*pftype)(int, int);

pf1=sum; pf1(10,20);
- Menu driven programs without if,else,switch(array of function pointers)
- Rewrite this code using typedef
*/
#include <stdio.h>

int sum(int, int);
int sub(int, int);
int do_operation(int (*f_ptr)(int, int), int m, int n);

int main()
{
    int a, b, choice, result;
    printf("Enter 2 integer numbers: ");
    scanf("%d %d", &a, &b);
    printf("What do you want to do with these numbers? \n");
    printf("1. ADD\n2. SUB\n");
    scanf("%d", &choice);

    // Function pointer array
    int (*fun_ptr[])(int, int) = {sum, sub};

    // Call do_operation with the appropriate function pointer
    if (choice == 1 || choice == 2)
    {
        result = do_operation(fun_ptr[choice - 1], a, b);
        printf("Result = %d\n", result);
    }
    else
    {
        printf("Invalid choice.\n");
    }

    return 0;
}

int do_operation(int (*fun_ptr)(int, int), int m, int n)
{
    return fun_ptr(m, n);
}

int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}
