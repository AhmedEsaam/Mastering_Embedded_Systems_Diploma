/*
 * ----------------------------------------------------------------------------------
 * Name      	: HW1_EX7_Swap_Two_Numbers_without_temp_variable.c
 *
 * Created on	: Feb 1, 2023
 * Author    	: Ahmed Essam El-Mogy
 * Description	: Unit 2. C Programming >> Lesson 3. C Basics >> Assignment
 *  	          >> Homework 1 >> EX7 - Swap Two Numbers without temp variable
 * C Standard	: ANSI C
 * ----------------------------------------------------------------------------------
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	/*...................... For Integers ......................*/

	printf("********** Integers **********\n");
	int a, b;

	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%d", &a);

	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%d", &b);

	b = a ^ b;
	a = b ^ a;
	b = b ^ a;

	printf("\nAfter swapping, value of a = %d\n", a);
	printf("After swapping, value of b = %d\n\n", b);


	/*....................... For Floats .......................*/

	printf("********** Floats **********\n");
	float aa, bb;

	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f", &aa);

	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f", &bb);

	bb = aa + bb;  /* sum */
	aa = bb - aa;  /* -> (a+b)-a = b */
	bb = bb - aa;  /* -> (a+b)-b = a */

	printf("\nAfter swapping, value of a = %f\n", aa);
	printf("After swapping, value of b = %f\n", bb);

	return 0;
}
