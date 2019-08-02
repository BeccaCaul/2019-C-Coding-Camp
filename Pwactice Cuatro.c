#include <stdio.h>
int main(void)
{
	int i;
	for(i=1; i<=12;i++)
	{
		printf("\n%5i", i);
		int b;
	for(b=2; b<=12;b++)
	{
		printf("%5i", b * i);
	}
	}
}