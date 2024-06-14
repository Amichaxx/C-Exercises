#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Define the stack structure
typedef struct {
    char *data;
    int top;
    int capacity;
} Stack;

// Function to initialize the stack
Stack* createStack(int capacity) {
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->data = (char *)malloc(capacity * sizeof(char));
    return stack;
}

// Function to push an element onto the stack
void push(Stack *stack, char item) {
    if (stack->top == stack->capacity - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack->data[++stack->top] = item;
}

// Function to pop an element from the stack
char pop(Stack *stack) {
    if (stack->top == -1) {
        printf("Stack underflow\n");
        return '\0';
    }
    return stack->data[stack->top--];
}

// Function to check if the stack is empty
bool isEmpty(Stack *stack) {
    return stack->top == -1;
}

// Function to take user input
char* takeUserInput(void) {
    char *input = malloc(100 * sizeof(char)); // Allocate memory for input
    if (input == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    printf("Enter a string with parentheses: ");
    if (fgets(input, 100, stdin) == NULL) {
        printf("Error reading input\n");
        free(input);
        return NULL;
    }
    // Remove newline character
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }
    return input;
}

// Function to check if parentheses are balanced
bool checkParentheses(char *s) {
    // Define matching parentheses
    char match[128] = {0};
    match[')'] = '(';
    match[']'] = '[';
    match['}'] = '{';
    
    Stack *stack = createStack(strlen(s));
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if (ch == '(' || ch == '[' || ch == '{') {
            push(stack, ch);
        } else if (ch == ')' || ch == ']' || ch == '}') {
            if (isEmpty(stack) || pop(stack) != match[ch]) {
                free(stack->data);
                free(stack);
                return false;
            }
        }
    }
    bool balanced = isEmpty(stack);
    free(stack->data);
    free(stack);
    return balanced;
}

int main(void) {
    char *input = takeUserInput();
    if (input != NULL) {
        bool result = checkParentheses(input);
        if (result) {
            printf("The parentheses are balanced.\n");
        } else {
            printf("The parentheses are not balanced.\n");
        }
        free(input); // Free the allocated memory for the input
    }
    return 0;
}
