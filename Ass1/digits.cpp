#include <stdio.h>
int digits(int num);
int main()
{
	int a;
	puts("Please input an positive integer: ");
	scanf("%d", &a);
	if (a > 999)
		puts("The input is too big.");
	else
		printf("The number of digits of %d is %d.\n", a, digits(a));
	return 0;
}
int digits(int num)
{
	if (num > 99)
		return 3;
	else if (num > 9)
		return 2;
	else
		return 1;
}