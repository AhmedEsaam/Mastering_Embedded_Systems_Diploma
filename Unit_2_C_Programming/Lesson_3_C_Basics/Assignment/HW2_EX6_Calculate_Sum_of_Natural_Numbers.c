/*
 * ----------------------------------------------------------------------------------
 * Name      	: HW2_EX6_Calculate_Sum_of_Natural_Numbers.c
 *
 * Created on	: Feb 2, 2023
 * Author    	: Ahmed Essam El-Mogy
 * Description	: Unit 2. C Programming >> Lesson 3. C Basics >> Assignment
 *  	          >> Homework 2 >> EX6 - Calculate the Sum of Natural Numbers
 * C Standard	: ANSI C
 * ----------------------------------------------------------------------------------
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	int num, sum;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &num);

	sum = (num + 1) * (num/2.0);
	printf("Sum = %d\n", sum);

	return 0;
}
