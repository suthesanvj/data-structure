#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10
struct Stack {
    int items[MAX_SIZE];
    int top;
};
void initialize(struct Stack *stack) {
    stack->top = -1;
}
int isFull(struct Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}
void push(struct Stack *stack, int item) {
    if (isFull(stack)) {
        printf("Stack is full. Cannot push.\n");
    } else {
        stack->items[++stack->top] = item;
        printf("%d pushed to stack.\n", item);
    }
}
int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. Cannot pop.\n");
        return -1;
    } else {
        return stack->items[stack->top--];
    }
}
int peek(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. Cannot peek.\n");
        return -1;
    } else {
        return stack->items[stack->top];
    }
}
void display(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack contents:\n");
        for (int i = stack->top; i >= 0; i--) {
            printf("%d\n", stack->items[i]);
        }
    }
}
int main() {
    struct Stack stack;
    initialize(&stack);
    int choice, item;
    do {
        printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1 || choice < 1 || choice > 5) {
            printf("Invalid choice. Please enter a valid option.\n");
            while (getchar() != '\n');  
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter element to push: ");
                if (scanf("%d", &item) != 1) {
                    printf("Invalid input for element. Please enter a valid integer.\n");
                    while (getchar() != '\n');  
                    continue;
                }
                
                push(&stack, item);
                break;
            case 2:
                item = pop(&stack);
                if (item != -1) {
                    printf("%d popped from stack.\n", item);
                }
                break;
            case 3:
                item = peek(&stack);
                if (item != -1) {
                    printf("Top element: %d\n", item);
                }
                break;
            case 4:
                display(&stack);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    } while (choice != 5);

    return 0;
}

