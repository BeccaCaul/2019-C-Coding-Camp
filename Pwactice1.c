#include <stdio.h>
int main(void)
{
	printf("Enter two integers separated by a space:");
	int a, b;
	scanf("%d %d", &a, &b);
	printf("you answered %d and %d.", a, b);
}