#include <stdio.h>
int main()
{
    double num1, num2, n = 1; 
    // num1 for first number, num2 for second number and n for continuation of while loop
    char op;
    // op for the operand

    // giving instructions for use to the user
    printf("\nCalculator switched ON\n");
    printf("To Switch OFF the calculator enter 0 X 0\n");
    printf("Enter the operation in the following format :\n");
    printf("\tnumber 1 (+,-,*,/) number 2\n");

    while (n == 1)//running the loop until n is 1.
    {
        printf("\n");
        scanf(" %lf %c %lf", &num1, &op, &num2);// taking the operation as input from the user
        switch (op)
        {
        case '+':
            printf("= %lf", num1 + num2);//adding first number and second number & displaying
            break;
        case '-':
            printf("= %lf", num1 - num2);//subtracting first number from second number & displaying
            break;
        case '*':
            printf("= %lf", num1 * num2);//multiplying first number and second number & displaying
            break;
        case '/':
            if (num2 == 0) printf("Error: division by 0");// checking if divisor is zero
            else printf("= %lf", num1 / num2);//dividing first number from second number & displaying
            break;
        case 'X':
            n = 0;//ending the while loop and switching OFF the calculator
            printf("Calculator switched OFF\n");
            break;
        default://when the user enters undesired input
            printf("**Invalid Input**");
        }
    }
    return 0;
}