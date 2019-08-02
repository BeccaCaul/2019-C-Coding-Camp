#include <math.h>
#include <stdio.h>
/* Use defines instead of magic numbers */

/*
  Function name: circle_pi
  Inputs       : int rectangles
  Outputs      : double

  Write a function called circle_pi that takes in an integer containing the
  number of rectangles to use and returns the calculated value of pi. The
  function will calculate pi with the circle method using the given
  number of rectangles.
*/
double circle_pi(int rectangles)
{
	int i;
	double area = 0;
	double height;
	double width = 2.0 / rectangles;
	double midpoint = 1.0 / rectangles;
		for (i = 0; i < rectangles; i++)
		{
			height = sqrt(4 - (midpoint * midpoint));
			midpoint += width;
			area += height * width;
		}
	return area;
}
	/* Circle method for calculating pi
	  The circle method for calculating the value of pi involves calculating
	  the area of a quarter circle.

	  Consider a circle with a radius of 2:
	  Area = pi * r^2
	  Area = 4 * pi

	  If we look at the area of a quarter circle the equation becomes:
	  Area / 4 = 4 * pi
	  Area = pi

	  From this we can see that the value of pi is equal to the area
	  of a quarter cirlce of radius 2.

	  To calculate the area, we can estimate it using rectangles. The
	  more rectangles, the more accurate the calculation.

	  The width of the rectangles will be the radius of the circle (2)
	  divided by the number of rectangles to use.

	  The height of the rectangles will all be different. To calculate
	  the hieght use the following equation:

	  h = sqrt(r * r - x * x)

	  where r is the radius and x is the horizontal location of the
	  rectangle's midpoint. */


/*
  Function name: leibniz_pi
  Inputs       : int iterations
  Ouptus       : double

  Write a function called leibniz_pi that takes in an integer containing
  the number of iterations to perform and returns the calculated value
  of pi. The function will calculate pi using the leibniz method.
*/
double leibniz_pi(int iterations)
{
	int i;
	double Pi = 0;
	for (i = 1; i <= iterations; i++)
	{
		double Denom = 2 * i - 1;
		if (i % 2)
		{
			Pi += 1 / Denom;
		}
		else
		{
			Pi -= 1 / Denom;
		}
	}
	return Pi * 4;
	/* Leibniz method for calculating pi
	  The leibniz method for calculating pi uses what is called an
	  infinite series. The series looks like this:

	  pi / 4 = 1/1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 ...

	  example:

	  iterations   pi
	  1            4.00000000
	  10           3.04183962
	  100          3.13159290
	  1000         3.14059265

	  The iterations terms you have, the more accurate your calculation of pi is.
	*/

}

