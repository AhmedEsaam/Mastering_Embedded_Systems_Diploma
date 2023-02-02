/*
 * ----------------------------------------------------------------------------------
 * Name      	: HW2_EX8_Make_a_Sinple_Calculator.c
 *
 * Created on	: Feb 2, 2023
 * Author    	: Ahmed Essam El-Mogy
 * Description	: Unit 2. C Programming >> Lesson 3. C Basics >> Assignment
 *  	          >> Homework 2 >> EX8 - Make a Simple Calculator
 * C Standard	: ANSI C
 * ----------------------------------------------------------------------------------
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	do
	{
		char op;
		printf("Enter the operator (+,-,*, or /): ");
		fflush(stdin); fflush(stdout);
		scanf("%c", &op);

		float a, b, result;
		printf("Enter the two operands: ");
		fflush(stdin); fflush(stdout);
		scanf("%f %f", &a, &b);
		switch (op)
		{
			case '+':
				result = a + b;
				break;
			case '-':
				result = a - b;
				break;
			case '*':
				result = a * b;
				break;
			case '/':
				result = a / b;
				break;
			default:
				printf("Wrong entry.\n");
				break;
		}
		printf("%.2f %c %.2f = %.2f\n\n", a, op, b, result);

		printf("Another entry? (y/n): ");
		fflush(stdin); fflush(stdout);
	}
	while(getchar()=='y');

	return 0;
}
