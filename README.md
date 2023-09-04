 # C Calculator

This is a simple calculator program written in C. It can perform basic arithmetic operations such as addition, subtraction, multiplication, and division.

## How to use

To use the calculator, simply enter the following command in a terminal window:

```
./calculator
```

You will then be prompted to enter two numbers and an operator. For example, to add two numbers, you would enter the following:

```
10 + 20
```

The calculator will then display the result of the operation.

To exit the calculator, simply enter `0 X 0`.

## Code explanation

The code for the calculator is relatively simple. The main function first declares three variables: `num1`, `num2`, and `n`. `num1` and `num2` are used to store the two numbers that the user enters, and `n` is used to control the while loop that runs the calculator.

The main function then prints instructions for the user, and then enters a while loop. The while loop will continue to run until the user enters `0 X 0`.

Inside the while loop, the main function first prompts the user to enter two numbers and an operator. The user's input is then stored in the variables `num1`, `num2`, and `op`.

The main function then uses a switch statement to perform the appropriate operation. The switch statement checks the value of the `op` variable, and then branches to the appropriate case.

The case statements perform the following operations:

* `+`: Adds `num1` and `num2` and displays the result.
* `-`: Subtracts `num2` from `num1` and displays the result.
* `*`: Multiplies `num1` and `num2` and displays the result.
* `/`: Divides `num1` by `num2` and displays the result.
* `X`: Exits the calculator.

If the user enters an invalid operator, the main function will print an error message.

## Conclusion

This is a simple but functional calculator program written in C. It can be used to perform basic arithmetic operations such as addition, subtraction, multiplication, and division.
