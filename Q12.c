/*
Q 12. Passing function names as parameters
	void test(int x, int y, int (*fp) (int,int))
	{
		int z = fp(x,y);
		----
	}
	test(10,20,sum);
*/
#include <stdio.h>
void test(int x, int y, int (*fp)(int, int));
int sum(int a, int b);
int main()
{
	test(10, 20, sum);
	return 0;
}
void test(int x, int y, int (*fp)(int, int))
{
	int z = fp(x, y);
	printf("sum of given  number is %d\n", z);
}
int sum(int a, int b)
{
	return a + b;
}
