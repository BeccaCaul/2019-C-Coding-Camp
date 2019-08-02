#include <stdio.h>
#include <stdlib.h>

int RandomInt(int low, int high)
{
  return rand() % (high - low + 1) + low;
}

int main(void)
{
	int count, low, high;
	printf("Enter three integers separated by spaces.\nThe integers are for the count, low, and high values:");
	scanf("%d %d %d", &count, &low, &high);
	int number = RandomInt(low, high); 
	int i;
	for(i=1; i <= count;i++)
	{
		printf("\n%5d: %d", count, number);
	}	
}
//kinda failed but I'm lazy and I'll finish it later