#include <stdio.h>
#include "SimpleArrays.h"

int main(void) {
  float farray1[] = {1.1, 2.2, 3.3, 4.4};
  int farray1size = sizeof(farray1) / sizeof(float);
  float farray2[] = {1.534, -9.123, 6.6543, -8.2534, -5.136574, 1.21567, 4.58197, 3.333333};
  float farray3[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8};
  int farray2size = sizeof(farray2) / sizeof(float);
  int iarray1[] = {1, 2, 3, 4};
  int iarray1size = sizeof(iarray1) / sizeof(int);
  int iarray2[] = {5, 3, -6, 9, 0, 1, 2, -7};
  int iarray2size = sizeof(iarray2) / sizeof(int);
  int set[] = {1, 2, 3, 4, 5};
  int comp1[] = {1, 2, 3, 4, 5};
  int comp2[] = {1, 2, 3, 4, 5};
  int comp3[] = {5, 4, 3, 2, 1};
  
  printf("PrintArrayFloat Test\n");
  PrintArrayFloat(farray1, farray1size);
  printf("\n");
  PrintArrayFloat(farray2, farray2size);
  printf("\n\n");
  
  printf("PrintArrayInt Test\n");
  PrintArrayInt(iarray1, iarray1size);
  printf("\n");
  PrintArrayInt(iarray2, iarray2size);
  printf("\n\n");
  
  printf("AddArraysFloat test\n");
  AddArraysFloat(farray2, farray3, farray2size);
  printf("\n\n");
  
  printf("SetArray test\n");
  printf("Before: ");
  PrintArrayInt(set, 5);
  SetArray(set, 5, 0);
  printf("\nAfter");
  PrintArrayInt(set, 5);
  
  printf("CompareArray test\n");
  PrintArrayInt(comp1, 5);
  printf("\n");
  PrintArrayInt(comp2, 5);
  printf("\n");
  PrintArrayInt(comp3, 5);
  printf("\narray1 == array2? %i", CompareArray(comp1, comp2, 5));
  printf("\narray1 == array2? %i\n\n", CompareArray(comp1, comp3, 5));
  
  
  printf("DotProduct test\n");
  printf("array1: ");
  PrintArrayFloat(farray2, 5);
  printf("\narray1: ");
  PrintArrayFloat(farray3, 5);
  printf("result: %i", DotProduct(farray2, farray3, 5));
  
  return 0;
}
