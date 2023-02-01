/*
 * ----------------------------------------------------------------------------------
 * Name      	: C_Basics_Lab.c
 *
 * Created on	: Jan 29, 2023
 * Author    	: Ahmed Essam El-Mogy
 * Description	: Unit 2. C Programming >> Lesson 3. C Basics >> Lab
 *           	  Practice lecture codes and notes
 * C Standard	: ANSI C
 * ----------------------------------------------------------------------------------
 */


#include <stdio.h>

/*#define TYPE_CONVERSIONS*/
#ifdef TYPE_CONVERSIONS

int main()
{
	/* Implicit */
	int x = 5;
	float y = 2.0;
	if (x/y == 2)
		printf("int/float >>> int\n");
	else if (x/y == 2.5) /*right*/
		printf("int/float >>> float\n");
	/*-------------------------*/
	/*IMPORTANT!*/
	float a;
	a = 9/2;  /* 9/2 = int/int = 4   a = 4.000000 */
	printf("%f\n", a);
	/*-------------------------*/

	/* Explicit */
	int xx = 0xffffff10;
	char yy = (char)xx;
	printf("%d\n", yy);  /* yy = 0x10 = 16 */

	return 0;
}
#endif /*TYPE_CONVERSIONS*/


/*#define INPUT_OUTPUT*/
#ifdef INPUT_OUTPUT

int main()
{

	int testInteger;
	printf("Enter an integer: ");
	fflush(stdout); /*flush the buffer*/
	scanf("%d", &testInteger);
	printf("Number = %d\r\n", testInteger);
	/*---------------------------------*/

	int x = -124;
	/*printf("%u\n",x);*/ /*if you used %u with -ve number: it will yield a wrong answer*/
	printf("%d\r\n",x);
	/*---------------------------------*/

	int xx = 26;
	printf("%05d\r\n",xx); /* Print the number in 5 digits and pad it with zeros : 00026 */

	int yy = 731426;
	printf("%10d\r\n",yy); /* Print the number in 10 places minimum */

	float R = 731.161644;
	printf("%10.3lf\r\n",R); /* Print the real number in 10 places and 3 digits after the point */


	return 0;
}
#endif /*INPUT_OUTPUT*/


/*#define PRINTF_TRICKS*/
#ifdef PRINTF_TRICKS

int main()
{
	unsigned char x = 0;

	printf("Variable width control: \n");
	printf("Right-justified variable width: '%*c'\n", 5, 'x');
	printf("Left-justified variable width:  '%*c'\r\n", -5, 'x');

	int r = printf("Strings:\n");
	printf("(the last printf printed %d characters)\n", r);

	const char* s = "Hello";
	printf("\t[%10s]\n\t[%-10s]\n\t[%*s]\n\t[%-10.*s]\n\t[%-*.*s]\r\n", s, s, 10, s, 4, s, 10, 4, s);

	printf("Characters:\t%c %%\r\n", 65);

	printf("Integers\n");
	printf("Decimal:\t%i %d %.6i %i %.0i %+i %u\n", 1, 2, 3, 0, 0, 4, -1);
	printf("Hexadecimal:\t%x %x %X %#x\n", 5, 10, 10, 6);
	printf("Octal:\t\t%o %#o %#o\r\n", 10, 10, 4);

	printf("Floating point:\n");
	printf("Rounding:\t%f %.0f %.32f\n", 1.5, 1.5, 1.5);
	printf("Padding:\t%05.2f %.2f %5.2f\n", 1.5, 1.5, 1.5);
	printf("Scientific:\t%E %e\n",1.5, 1.5);
	printf("Special values:\t0/0=%g 1/0=%g\r\n", 0.0/0.0, 1.0/0.0);

	printf("C_trick:\t %d \n", x);
	printf("C_trick:\t %d %d %d \n", ++x, x, x++); /* the right most operation performed first */
	printf("C_trick:\t %d %d %d \r\n", x++, ++x, x); /* x = 2 from previous line */

	return 0;
}
#endif /* PRINTF_TRICKS */


/*#define OPERATORS*/
#ifdef OPERATORS

int main()
{
	printf("%d\r\n", (-15) || 0); /* prints 1 */
	/*----------------------------------*/

	/* IMPORTANT! */
	char x = 1, y = 0;
	printf("%d\n", x-- || ++y); /* What is the value of y after this line? */
	printf("y = %d\n", y); /* y still = 0, As x was 1 so the right side of || haven't been executed. */

	return 0;
}
#endif /* OPERATORS */


/*...................................// Conditions \\...................................*/

/*#define NESTED_IF_CONDITIONS*/
#ifdef NESTED_IF_CONDITIONS

#define PI 3.14159

int main(int argc, char **argv)
{
	char choice;
	float radius;
	float area, circumference;
	while(1)
	{
		printf("Enter circle radius : ");
		fflush(stdin); fflush(stdout);
		scanf("%f", &radius);
		printf("Enter your choice ('a' to print the area, 'c' to print the circumference) : ");
		fflush(stdin); fflush(stdout);
		scanf("%c", &choice);
		if(choice=='a')
		{
			area = PI * radius * radius;
			printf("\narea is %f\r\n\n", area);
		}
		else if(choice=='c')
		{
			circumference = 2 * PI * radius;
			printf("\ncircumference is %f\r\n\n", circumference);
		}
		else
			printf("\nwrong choice\r\n\n");
	}

	return 0;
}
#endif /* NESTED_IF_CONDITIONS */


/*#define NESTED_IF_2*/
#ifdef NESTED_IF_2

int main()
{
	int a, b, c;
	printf("Enter three values : \n");
	fflush(stdin); fflush(stdout);
	scanf("%d %d %d", &a, &b, &c);
	if (a>b)
	{
		if (a>b)
			printf("the largest value is %d\n", a);
		else
			printf("the largest value is %d\n", c);
	}
	else
	{
		if(b>c)
			printf("the largest value is %d\n", b);
		else
			printf("the largest value is %d\n", c);
	}

	return 0;
}
#endif /* NESTED_IF_2 */


/*#define LINE_CONDITION*/
#ifdef LINE_CONDITION

int main()
{
	int a, b, minimum;
	printf("Enter two numbers : \n");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &a, &b);
	minimum = (a<b)? a : b; 	/* (condition)? (true case) : (else case) */
	printf("The minimum is %d\n", minimum);
	/* Or: */
	printf("The minimum is %d\n", (a<b)? a : b);

	return 0;
}
#endif /* LINE_CONDITION */


/*#define SWITCH_STATEMENT*/
#ifdef SWITCH_STATEMENT

#define PI 3.14159

int main()
{
	/*                             // *** Switch Statements *** \\
	 * Pros:
	 * 	• Faster -in run time- than 'if conditions':
	 * 		-> Switches use lookup tables. So, it doesn't need to iterate through all cases.
	 *
	 *
	 * Cons:
	 * 	• 'If condition' has more condition capability:
	 * 		-> In every else-if condition, you can write a whole new expression to be executed,
	 * 			while with switches, you can only put one expression and then switch on its values.
	 * 		-> If conditions can switch on values that are still to be calculated at run time.
	 *
	 * 	• Can only switch on (const integer) values.
	 */

	char choice;
	float radius;
	float area, circumference;
	while(1)
	{
		printf("Enter circle radius : ");
		fflush(stdin); fflush(stdout);
		scanf("%f", &radius);
		printf("Enter your choice ('a' to print the area, 'c' to print the circumference) : ");
		fflush(stdin); fflush(stdout);
		scanf("%c", &choice);

		switch (choice)
		{
			case 'a':
				area = PI * radius * radius;
				printf("\narea is %f\r\n\n", area);
				break;

			case 'c':
				circumference = 2 * PI * radius;
				printf("\ncircumference is %f\r\n\n", circumference);
				break;

			default:
				printf("\nwrong choice\r\n\n");
				break;
		}
	}

	return 0;
}
#endif /* SWITCH_STATEMENT */


/*#define PREFIX_POSTFIX*/
#ifdef PREFIX_POSTFIX

int main(int argc, char **argv)
{
	int x, y;

	/*............. Pre-fix ............*/
	x = 0;
	y = ++x;	/* y = 1 */
	/*
	 * -> go to memory (& x)
	 * -> x = x + 1;
	 * -> load the final value.
	 */

	/*............. Post-fix ...........*/
	x = 0;
	y = x++;	/* y = 0 */
	/*
	 * -> load value.
	 * -> go to memory (& x)
	 * -> x = x +1;
	 */

	/* Note:
	 * • The order only comes to an effect when reading the value of x is required
	 * 		elsewhere in the same line. Like 'printf', 'if condition', ...etc.
	 * 		-> Because, the order will then be important.
	 * 		-> ex. 	printf("%d", x++); // if (x was 1) -> it prints 1
	 * 				printf("%d", ++x); // if (x was 1) -> it prints 2
	 *
	 * • Pre-fix/post-fix does not have an effect if it was in a separate line alone.
	 * 		-> ex. x++; // order doesn't have an effect.
	 * 		-> We will have the final value of x in the next line anyway.
	 */

	return 0;
}
#endif /* PREFIX_POSTFIX */


/*......................................// Loops \\......................................*/

/*#define FOR_LOOPS*/
#ifdef FOR_LOOPS

/* Summation of values between (1 and 99) */
int main(int argc, char **argv)
{
	int i, sum = 0;
	for (i = 1; i <= 99; ++i)
	{
		sum += i;
	}
	printf("Summation of values between (1 and 99) is : %d\n", sum);
	sum = 0;

	/*.............. for loop is a while loop: ..............*/

	i = 1;			/* 1. initiation */
	while (i <= 99)	/* 2. condition */
	{
		sum += i;	/* 3. body */

		++i;		/* 4. increment */
	}

	/*
	 * Note:
	 * 	• As the 'increment' line here is in a separate line:
	 * 		-> the order of increment doesn't matter (i++ or ++i) in for loops.
	 */

	printf("Summation of values between (1 and 99) is : %d\n", sum);
	sum = 0;

	/*.............. An acceptable 'for loop' syntax: ..............*/
	int j;
	/* for ((multiple initiations); (complex condition); (multiple increments/decrements)) */
	for (i = 1, j = 100; i <= 50 && j >= 51; ++i, --j)
	{
		sum += i + j;
	}
	printf("Summation of values between (1 and 99) is : %d\n", sum-100);
	sum = 0;

	/* Actually, this particular problem has a direct solution formula: */
	int num = 99;
	sum = (num + 1) * (num/2.0);
	printf("Summation of values between (1 and 99) is : %d\n", sum);

	return 0;
}
#endif /* FOR_LOOPS */


/*#define FOR_LOOPS_2*/
#ifdef FOR_LOOPS_2

/* Calculate the average degree of a known number of students */
int main(int argc, char **argv)
{
	int nStudents;
	float degree, sum;
	printf("Enter the number of students : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &nStudents);
	int i;
	for (i = 1, sum = 0; i <= nStudents; ++i)
	{
		printf("Enter student (%d) degree : ", i);
		fflush(stdin); fflush(stdout);
		scanf("%f", &degree);
		sum += degree;
	}
	printf("Average students degree is : %f\n", sum/nStudents);

	return 0;
}
#endif /* FOR_LOOPS_2 */


/*#define WHILE_LOOP*/
#ifdef WHILE_LOOP

/* Calculate the average degree of a known number of students */
int main(int argc, char **argv)
{
	int nStudents;
	float degree, sum;
	printf("Enter the number of students : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &nStudents);

	int i = nStudents;
	while(i--)
	{
		printf("Enter student (%d) degree : ", nStudents - i);
		fflush(stdin); fflush(stdout);
		scanf("%f", &degree);
		sum += degree;
	}
	printf("Average students degree is : %f\n", sum/nStudents);

	return 0;
}
#endif /* WHILE_LOOP */


/*#define WHILE_LOOP_2*/
#ifdef WHILE_LOOP_2

/* Calculate the average degree of an unknown number of students */
int main(int argc, char **argv)
{
	int nStudents = 0;
	float degree, sum = 0;

	printf("Enter negative value to exit: \n");
	while(1)
	{
		printf("Enter student (%d) degree : ", nStudents + 1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &degree);

		if (degree < 0) break; /* force exit from while loop */

		sum += degree;

		nStudents++;
	}

	printf("Average students degree is : %f\n", sum/nStudents);

	return 0;
}
#endif /* WHILE_LOOP_2 */


/*#define DO_WHILE_LOOP*/
#ifdef DO_WHILE_LOOP

int main(int argc, char **argv)
{
	float x, y;

	do
	{
		printf("Enter x value: ");
		fflush(stdin); fflush(stdout);
		scanf("%f", &x);
		y = 5*x*x + 3*x + 2;
		printf("y(%f) = %f\r\n", x, y);

		printf("do you want to evaluate again (y/n) : ");
		fflush(stdin); fflush(stdout);
	}
	while(getchar()=='y');

	return 0;
}
#endif /* DO_WHILE_LOOP */


/*#define GOTO_STATEMENT*/
#ifdef GOTO_STATEMENT

int main(int argc, char **argv)
{
	/* goto statement tells the program where to jump; it can jump forward or backward. */

	/* Disclaimer:
	 * 		Using 'goto' extensively leads to unreadable and unorganized code.
	 */

	float x, y;

evaluate_again:

	printf("Enter x value: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &x);
	y = 5*x*x + 3*x + 2;
	printf("y(%f) = %f\r\n", x, y);

	printf("do you want to evaluate again (y/n) : ");
	fflush(stdin); fflush(stdout);

	while(getchar()=='y')
		goto evaluate_again;

	return 0;
}
#endif /* GOTO_STATEMENT */


/*#define BREAK_STATEMENT*/
#ifdef BREAK_STATEMENT

int main(int argc, char **argv)
{
	/* break statement causes immediate exit from the concern loop. */
	int i;
	for (i = 0; i < 10; ++i)
	{
		if (i==5)
		{
			printf("\nComing out of for loop when i = 5");
			break;
		}
		printf("%d\n", i);
	}

	return 0;
}
#endif /* BREAK_STATEMENT */


/*#define CONTINUE_STATEMENT*/
#ifdef CONTINUE_STATEMENT

int main(int argc, char **argv)
{
	/* continue statement is used to skip to the next iteration of the loop */
	int i;
	for (i = 0; i < 10; ++i)
	{
		if (i==5 || i==6)
		{
			printf("Skipping %d from display using continue statement.\n", i);
			continue;
		}
		printf("%d\n", i);
	}

	return 0;
}
#endif /* CONTINUE_STATEMENT */


/*#define NESTED_LOOPS*/
#ifdef NESTED_LOOPS

int main(int argc, char **argv)
{
	int i, j;
	for (i = 0; i < 10; ++i)
	{
		for (j = i; j < 10; ++j)
		{
			printf("%d ", j);
		}
		printf("\n");
	}

	return 0;
}
#endif /* NESTED_LOOPS */

