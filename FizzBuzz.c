/*
Write a program that prints the numbers from 1 to 100. If the number is divisible
by 3, print "Fizz" instead of the number. If the number is divisible by 5, print
"Buzz" instead of the number. If the number is divisible by 3 and 5, print "FizzBuzz"
instead of the number

Example:
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;
	for (i=1; i<=100; i++)
	{
		if(i % 5 == 0 && !(i % 3 == 0))
		{
			printf("Fizz\n");
		}
		else if(i % 3 == 0 && !(i % 5 == 0))
		{
			printf("Buzz\n");
		}
		else if(i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz\n");
		}
		else
		{
			printf("%d\n", i);
		}
	}
}
