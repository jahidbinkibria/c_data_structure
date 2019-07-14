#include<stdio.h>


struct node{
    int data;
    struct node *next;
};

typedef struct node Node;
Node *head;

Node *create_node(int item, Node *next){
    Node *new_node = (Node *) malloc(sizeof(Node));
    if(new_node == NULL){
        printf("Error No memory Allocation\n");
        exit(1);
    }
    new_node->data = item;
    new_node->next = next;

    return new_node;
};


int main(){
    Node *n;
    n = create_node(12, NULL);
    printf("data = %d\n", n->data);

    return 0;
}
