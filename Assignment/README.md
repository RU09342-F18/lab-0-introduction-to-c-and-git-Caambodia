# Created: Sept 8, 2018
# Last Edited: Sept 9, 2018
# Author: Cameron Bendzynski
#
# 	Overview:
# The math.c and math.h files collectively function as a basic calculator capable of two-number operations. Individual documentation of the functionality of the calculator is found in the math.c code itself.
#   Description of Code:
# The program will ask the user for an input of an operator. The valid operators are +, -, **, /, %, <, >, &, |, ^, and ~. This operator is stored in the "op" variable.
# The program will then ask the user two enter two numbers to be used in the calculation. Both numbers are entered in the same line, separated by a space. The first number is stored in the "num1" variable, and the second is stored in "num2".
# Finally, the code will perform the operation with the given operator and operands. The result is outputted with the other inputs to show the entire line of the calculation all together (Ex. 1 + 2 = 3).
# If an invalid operator is given, the program will not calculate anything and return an error message.
