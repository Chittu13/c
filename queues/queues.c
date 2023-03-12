#include <stdio.h>
#define MAXSIZE 5

int queue[MAXSIZE];
int front = -1;
int rear = -1;

void insert(int value) {
    if (rear == MAXSIZE - 1) {
        printf("Queue overflow\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = value;
    }
}

void delete() {
    int value;
    if (front == -1 || front > rear) {
        printf("Queue underflow\n");
    } else {
        value = queue[front];
        front++;
    printf("Deleted element: %d\n", value);
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Elements in queue: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    display();
    delete();
    display();
   delete();
    display();
    return 0;
}
