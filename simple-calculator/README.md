#Simple calculator

##Compile command:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

##Run instructions:
./calculator to start the program

##Supported operations:
1) Add (+)
2) Subtract (-)
3) Multiply (*)
4) Divide (/)
0) Quit

##Numeric behavior:
int
double
float

##Known limitations:
menu option is an integer
integer value is within the valid menu range
not required to handle non-numeric input
example: x, hello, 1abc. If the user enters non-numeric input, your program may fail (for example, by looping indefinitely or behaving unexpectedly).
This is intentional and accepted at this stage
