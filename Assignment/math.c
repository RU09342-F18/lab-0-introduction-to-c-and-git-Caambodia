// Created: Sept 8, 2018
// Last Edited: Sept 9, 2018
// Author: Cameron Bendzynski

#include <stdio.h>
#include <math.h>
int main()
{
	int num1, num2; // declaring the two integers for our calculator
	char op; // declaring the operator our calculator

	printf("Please enter an operator: "); // prompting the user to enter an operator
	scanf_s("%c", &op); // taking the user's input and storing it in the op variable

	printf("Please enter two numbers: "); // prompting the user to enter the two numbers
	scanf_s("%d %d", &num1, &num2); // taking the user's input and storing it in the num1 and num2 variables

	printf("Result: %d %c %d = %d\n", num1, op, num2, math(num1, num2, op)); // outputting the results after the proper calculations are complete

	return 0; // ending the program
}

int math(num1, num2, op)
{
	int result; // declaring the result integer

	result = 0; // resetting the variable to 0

	switch(op) // this switch statement will read the given operator and complete the proper calculations according to the inputs. If an improper operator is given, the code will not compute.
	{
		case '+':
			result = num1 + num2;
			break;

		case '-':
			result = num1 - num2;
			break;

		case '*':
			result = num1 * num2;
			break;

		case '/':
			result = num1 / num2;
			break;

		case '%':
			result = num1 % num2;
			break;

		case '<':
			result = num1 << num2;
			break;

		case '>':
			result = num1 >> num2;
			break;

		case '&':
			result = num1 & num2;
			break;

		case '|':
			result = num1 | num2;
			break;

		case '^':
			result = num1 ^ num2;
			break;

		case '~':
			result = ~num1;
			break;

		default: // the program tells the user that the given operator is not valid when an unknown operator is given
			printf("Undefined operator!\n");
	}

	return result; // returning the result of the calculation
}