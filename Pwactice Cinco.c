#include <stdio.h>
int main(void)
{
	printf("Enter an integer greater than 0:");
	int Freddy;
	scanf("%d", &Freddy);
	int i;
	for(i=1; i<=Freddy;i++)
	{
		printf("\n%5i", i);
		int b;
	for(b=2; b<=Freddy;b++)
	{
		printf("%5i", b * i);
	}
	}
}
