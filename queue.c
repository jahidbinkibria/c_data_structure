#include<stdio.h>
#define Queue_max 5

typedef struct{
    int data[Queue_max + 1];
    int head, tail;
} Queue;

void enqueue(Queue *q, int item){
    if((q->tail +1 ) % (Queue_max + 1) == q->head){
        printf("Queue is full \n");
        return;
    }
    q->data[q->tail] = item;
    q->tail = (q->tail + 1) % (Queue_max+1);
}

int dqueue(Queue *q){
    int item;
    if(q->tail == q->head){
        printf("Queue is Empty\n");
        return -1;
    }
    item = q->data[q->head];
    q->head = (q->head +1)% (Queue_max +1);

    return 0;
}

int main(){
    Queue my_q;
    int item;

    my_q.head = 0;
    my_q.tail = 0;

    enqueue(&my_q, 1);
    printf("Tail = %d\n", my_q.tail);

    enqueue(&my_q, 2);
    printf("Tail = %d\n", my_q.tail);

    enqueue(&my_q, 3);
    printf("Tail = %d\n", my_q.tail);

    printf("Begin head = %d\n", my_q.head);

    dqueue(&my_q);
    printf("Begin head = %d\n", my_q.head);
    dqueue(&my_q);
    printf("Begin head = %d\n", my_q.head);
    dqueue(&my_q);
    printf("Begin head = %d\n", my_q.head);
    dqueue(&my_q);



    return 0;
}


