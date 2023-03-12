#include <stdio.h>
#define MAXSIZE 5

int stack[MAXSIZE];
int top = -1;

void push(int value) {
    if (top >= MAXSIZE - 1) {
        printf("Stack overflow\n");
    } else {
        top++;
        stack[top] = value;
    }
}

void pop() {
    int value;
    if (top < 0) {
        printf("Stack underflow\n");
    } else {
        value = stack[top];
        top--;
        printf("Popped element: %d\n", value);
    }
}

void display() {
    if (top < 0) {
        printf("Stack is empty\n");
    } else {
        printf("Elements in stack: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    display();
    pop();
    display();
    pop();
    display();
    return 0;
}
