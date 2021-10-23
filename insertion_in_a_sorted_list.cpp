#include <stdio.h>
#include <stdlib.h>
struct  node{
    int data;
    struct node* next;
};
int main(){
    struct node *p,*q,*t,*r;
    int x;
    p = new node;
    printf("Enter The First Value : ");
    scanf("%d",&p->data);
    q = p;
    printf("Enter another Value : ");
    scanf("%d",&x);
    while(x){
        t = new node;
        t->data = x;
        q->next = t;
        q = q->next;
        printf("Enter another Value : ");
        scanf("%d",&x);
    }
    q->next = NULL;
    q = p;
    printf("Orginal List : ");
    while(q){
        printf("%d ",q->data);
        q = q->next;
    }
    printf("\n");
    int new_value;
    printf("Enter The New Value You Want To Add : ");
    scanf("%d",&new_value);
    r = new node;
    r->data = new_value;
    r->next = NULL;
    t = p;
    q = p;
    if(t->data > new_value){//For The First Node Value.
        r->next = p;
        p = r;
    }
    else{
        while(t && t->data <= new_value){
            q = t;
            t = t->next;
        }
        if(q->next == NULL){// For The Last Node Value.
            q->next = r;
        }else{//For Others.
            q->next = r;
            r->next = t;
        }
    }
    q = p;
    printf("New List is : ");
    while(q)
    {
        printf("%d ",q->data);
        q=q->next;
    }
    printf("\n");
}