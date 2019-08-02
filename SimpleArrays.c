#include <stdio.h>
#include "SimpleArrays.h"
/*
  Function name: PrintArrayFloat
  Inputs:        float array[], int arraySize
  Outputs:       none

  Write a function called PrintArray that takes in an array of floats
  and an integer containing the size of the array.  The function will
  print out all the values in the array in the following format:
  
  [1.5, 2.5, 0.0, 3.1]
*/

void PrintArrayFloat(float array[], int arraySize)
{
	int i;
	printf("[");
	for (i = 0; i < arraySize; i++)
	{
		printf("%.1f, ", array[i]);
	}
	
printf("]");

}

/*
  Function name: PrintArrayInt
  Inputs:        int array[], int arraySize
  Outputs:       none
  
  Write a function called PrintArray that takes in an array of integers
  and an integer containing the size of the array.  The function will
  print out all the values in the array in the following format:
  
  [1, 2, 0, 3]
*/

void PrintArrayInt(int array[], int arraySize)

{
	int i;
	printf("[");
	for (i = 0; i < arraySize; i++)
	{
		printf("%d, ", array[i]);
	}

	printf("]");
}


/* Challenges
  Function name: AddArraysFloat
  Inputs:        float array1[], float array2[], int arraySize
  Outputs:       none
  
  Write a function called AddArraysFloat that takes in two arrays
  of floats and an integer containing the size of the array.  The
  function will print each array. Then it will add each value in
  the arrays and print them.  Try to write this function without
  duplicating code you have already written.
  
  Example output:
    array1 = [1.1, 2.2, 3.3]
    array2 = [5.2, 6.2, 2.8]
    
    array1 + array2 = [6.2, 8.4, 6.1]
*/

void AddArraysFloat(float array1[], float array2[], int arraySize)
{
	printf("array1 =");
	PrintArrayFloat(array1, arraySize);
	printf("\narray2 =");
	PrintArrayFloat(array2, arraySize);
	printf("\n\narray1 + array2 = [");
	int i;
	for (i = 0; i < arraySize; i++)
	{
		float arr;
		arr = array1[i] + array2[i];
		printf("%.1f, ", arr);
	}
	printf("]");
	
		

	//printf("array1 + array2 = %d", PrintArrayFloat + PrintArrayInt);
}

/*
  Function name: SetArray
  Inputs:        int array[], int arraySize, int value
  Outputs:       none

  Write a function called SetArray that takes in an array of integers,
  an integer containing the size of the array, and an integer number.  The
  function will set all of the indexes in array to the number.

*/  
void SetArray(int array[], int arraySize, int value)
{
	int i;
	for (i = 0; i < arraySize; i++)
	{
		array[i] = value;
	}
}

/*
  Function name: CompareArray
  Inputs:        int array1[], int array2[], int arraySize
  Outputs:       int
  
  Write a funciton called CompareArray that takes in two arrays of integers
  and an integer containing the size of the arrays. The function will compare
  the two arrays to see if they are the same. If they are the same return 1,
  if they are different return 0.
*/

int CompareArray(int array1[], int array2[], int arraySize)
{
	int i;
	for (i = 0; i < arraySize; i++)
		if (array1[i] == array2[i])
			return 1;
		if (array1[i] != array2[i])
			return 0;
}

/* Challenges:
  Function name: DotProduct
  Inputs:        float array1[], float array2[], int arraySize
  Outputs:       int
  
  Write a function called DotProduct that takes in to arrays of floats
  and an integer containing the size of the arrays. The function will compute
  the dot product of the arrays and return the result. You compute the dot product
  by multiplying the values at matching indices together, then adding all of those
  together.
  
  Ex:
  array1: [1, 2, 3, 4, 5]
  array2: [6, 7, 8, 9, 10]
  
  dotProduct = (1 * 6) + (2 * 7) + (3 * 8) + (4 * 9) + (5 * 10)
*/
int DotProduct(float array1[], float array2[], int arraySize)
{
}
