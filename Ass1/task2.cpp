#include <stdio.h>
int main()
{
	int a;
	puts("Please input an integer: ");
	scanf("%d", &a);
	printf("%d is an %s number.\n", a, a % 2 == 0 ? "even" : "odd");//judge if a is even or odd
	return 0;
}