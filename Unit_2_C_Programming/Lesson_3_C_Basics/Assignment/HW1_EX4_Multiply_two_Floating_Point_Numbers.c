/*
 * ----------------------------------------------------------------------------------
 * Name      	: HW1_EX4_Multiply_two_Floating_Point_Numbers.c
 *
 * Created on	: Feb 1, 2023
 * Author    	: Ahmed Essam El-Mogy
 * Description	: Unit 2. C Programming >> Lesson 3. C Basics >> Assignment
 *  	          >> Homework 1 >> EX4 - Multiply two Floating Point Numbers
 * C Standard	: ANSI C
 * ----------------------------------------------------------------------------------
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	float num1, num2;
	printf("Enter two numbers: \n");
	fflush(stdin); fflush(stdout);
	scanf("%f\n%f", &num1, &num2);
	printf("Product: %f\n", num1 * num2);

	return 0;
}


