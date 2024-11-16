/*
Q3. Try some nested calls sqrt(pow(2,abs(x))), putchar(toupper(ch)) etc
*/
#include <stdio.h>
#include <math.h>

void absolute_fun(int x);
void pow_fun(int y);
void sqrt_fun(double z);

void main()
{
	int x;
	char ch;

	printf("Enter a character to covert into upper: ");
	scanf("%c", &ch);
	putchar(toupper(ch));
	putchar('\n');

	printf("Enter the value of x: ");
	scanf("%d", &x);
	absolute_fun(x);
}

void absolute_fun(int x)
{
	int y = abs(x);
	printf("%d\n", y);
	pow_fun(y);
}
void pow_fun(int y)
{
	double z = pow(2, y);
	printf("%f\n", z);
	sqrt_fun(z);
}
void sqrt_fun(double z)
{
	double result = sqrt(z);
	printf("sqrt(pow(2,abs(x))) = %f\n", result);
}
