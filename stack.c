#define STACK_MAX 100

typedef struct {
    int top;
    int data[STACK_MAX];
} Stack;

void push(Stack *s, int item){
    if(s->top < STACK_MAX){
        s->data[s->top] = item;
        s->top = s->top+1;
    }else{
        printf("Stack is full ");
    }
}

int pop (Stack *s){
    int item;

    if(s->top == 0){
        printf("Stack is Empty ");
        return -1;
    }else{
        s->top = s->top-1;
        item = s->data[s->top];
    }

    return item;
}

int main(){
    Stack mystack;
    int item;
    mystack.top = 0;

    push(&mystack, 1);
    push(&mystack, 2);
    push(&mystack, 3);

    item = pop(&mystack);
    printf("%d \n", item);

    item = pop(&mystack);
    printf("%d \n", item);

    item = pop(&mystack);
    printf("%d \n", item);


    return 0;

}





