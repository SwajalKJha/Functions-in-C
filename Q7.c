/*
Q7. Try conversions between int*, const int* while passing parameters to functions
int *p;
const int *q;
test(p); void test(const int* );
test(q); void test2(int *);
*/
#include <stdio.h>

void test1(const int *p);
void test2(int *q);

void main()
{
    int a = 10;
    int *p = &a;       // Mutable pointer to int
    const int *q = &a; // Pointer to const int

    test1(p); // This is valid
    test2(q); // This would be an error

    test2(p);                                     // This is valid, p can be modified
    printf("Value in main after test2: %d\n", a); // Should print 20

    return 0;
}
void test1(const int *p)
{
    printf("Value in test1: %d\n", *p);
}

void test2(int *q)
{
    *q = 20; // Modifying the value pointed to by q
    printf("Value modified in test2: %d\n", *q);
}
