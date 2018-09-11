/*
 * math.h
 *
 *  Created on: Sept 10, 2018
 * 	Last Edited: Sept 10, 2018
 *      Author: Scott Gordon
 */

#include <stdio.h>
#include <math.h>

int math(int a, int b, char c);


int main() {
    int num1 =8;
    int num2 =4;
    char operator = '/';
    printf("%d", math(num1, num2, operator)); //call the math method 

    return 0;
}

int math(int a, int b, char operator)
{
    int ans;
    if (operator =='+'){ //add operation
        ans = a + b;
    } else if (operator == '-') { //subtraction operation
        ans = a - b;
    } else if (operator == '*') { //multiplication operation
        ans = a * b;
    } else if (operator == '/') { //division operation
        ans = a / b;
    } else if (operator == '%') { //modulus operation
        ans = a % b;
    } else if (operator == '<') { //shift left operation
        ans = a << b;
    } else if (operator == '>') { //shift right operation
        ans = a >> b;
    } else if (operator == '&') { //and operation
        ans = a & b;
    } else if (operator == '|') { //or operation
        ans = a | b;
    } else if (operator == '^') { //xor operation
        ans = a ^ b;
    } else if (operator == '~') { //negation operation
        ans = ~a;
    }
    return ans;
}
