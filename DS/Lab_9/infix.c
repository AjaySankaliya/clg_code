#include<stdio.h>
#include<ctype.h>
#include<string.h>

int top = -1;
int s[100];  // Stack to hold operands

// Function to pop an element from the stack
int pop() {
    if(top == -1) {
        printf("Stack Underflow\n");
        return -1;
    } else {
        return s[top--];
    }
}

// Function to push an element onto the stack
void push(int val) {
    if(top >= 99) {
        printf("Stack Overflow\n");
    } else {
        s[++top] = val;
    }
}

// Function to evaluate the operation
int ivalutepost(char op, int op1, int op2) {
    switch(op) {
        case '+':
            return op1 + op2;
        case '-':
            return op1 - op2;
        case '*':
            return op1 * op2;
        case '/':
            return op1 / op2;
        default:
            return 0;
    }
}

void main() {
    char postfix[100];
    printf("Enter postfix expression to evaluate: ");
    scanf("%s", postfix);  // Read the postfix expression

    int i = 0;
    while(postfix[i] != '\0') {
        char temp = postfix[i];

        // If the character is a digit, push it onto the stack
        if(isdigit(temp)) {
            push(temp - '0');  // Convert the char to an integer and push
        } else {
            // It's an operator, pop two operands and evaluate the result
            int op2 = pop();
            int op1 = pop();
            int value = ivalutepost(temp, op1, op2);  // Perform the operation
            push(value);  // Push the result back onto the stack
        }
        i++;
    }

    // Final result is the remaining value in the stack
    printf("The result of the postfix expression is: %d\n", pop());
}

