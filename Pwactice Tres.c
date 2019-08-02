#include <stdio.h>
int main(void)
{
	printf("Enter an integer:");
	int samuel;
	scanf("%d", &samuel);
	int i;
	for	(i=1; i<=samuel;i++)
	{
		printf("%d: %d\n", i, i*i);
	}
}