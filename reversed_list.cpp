#include <stdio.h>
struct node{
    int data;
    struct node* next;
};
int main(){
    struct node *p,*q,*t,*r;
    int x;
    p = new node;
    printf("Enter the first value: ");
    scanf("%d",&p->data);
    printf("Enter the next value: ");
    scanf("%d",&x);
    q = p;
    while(x){
        t = new node;
        t->data = x;
        q->next = t;
        q = q->next;
        printf("Enter the next value: ");
        scanf("%d",&x);
    }
    q->next = NULL;
    q = p;
    printf("First List is : ");
    while(q){
        printf("%d ",q->data);
        q=q->next;
    }
    printf("\n");
    struct node *prev = NULL,*curr = p,*next = NULL;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    q = prev;
    printf("Reversed List is : ");
    while(q){
        printf("%d ",q->data);
        q=q->next;
    }
    printf("\n");
       
    return 0;
}