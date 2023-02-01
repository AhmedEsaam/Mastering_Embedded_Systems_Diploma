/*
 * ----------------------------------------------------------------------------------
 * Name      	: HW1_EX6_Swap_Two_Numbers.c
 *
 * Created on	: Feb 1, 2023
 * Author    	: Ahmed Essam El-Mogy
 * Description	: Unit 2. C Programming >> Lesson 3. C Basics >> Assignment
 *  	          >> Homework 1 >> EX6 - Swap Two Numbers
 * C Standard	: ANSI C
 * ----------------------------------------------------------------------------------
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	float a, b, temp;

	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f", &a);

	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f", &b);

	temp = b;
	b = a;
	a = temp;

	printf("\nAfter swapping, value of a = %f\n", a);
	printf("After swapping, value of b = %f\n", b);

	return 0;
}


