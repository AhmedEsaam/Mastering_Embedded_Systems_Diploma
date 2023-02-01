/*
 * ----------------------------------------------------------------------------------
 * Name      	: HW2_EX3_Find_the_Largest_Number.c
 *
 * Created on	: Feb 1, 2023
 * Author    	: Ahmed Essam El-Mogy
 * Description	: Unit 2. C Programming >> Lesson 3. C Basics >> Assignment
 *  	          >> Homework 2 >> EX3 - Find the Largest of Three Numbers
 * C Standard	: ANSI C
 * ----------------------------------------------------------------------------------
 */

#include <stdio.h>

int main()
{
	float a, b, c, max;
	printf("Enter three values : \n");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f", &a, &b, &c);

	if (a>b)
	{
		if (a>c)
			max = a;
		else
			max = c;
	}
	else
	{
		if(b>c)
			max = b;
		else
			max = c;
	}
	printf("Largest number = %f\n", max);

	return 0;
}
