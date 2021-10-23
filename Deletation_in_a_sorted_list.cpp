#include <stdio.h>
struct node{
    int data;
    struct node* next;
};
int main()
{
    struct node *p,*q,*t,*r;
    int x;
    p = new node;
    printf("Enter the first value: ");
    scanf("%d",&p->data);
    printf("Enter the next value: ");
    scanf("%d",&x);
    q = p;
    while(x)
    {
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
    while(q)
    {
        printf("%d ",q->data);
        q=q->next;
    }
    printf("\n");
    int y;
    printf("Delete the value : ");
    scanf("%d",&y);
    t = p;
    q = p;
    while(t->data != y)
    {
        if(t->next == NULL)break;
        q = t;
        t = t->next;
    }
    if(t == p)// when you want to delete the value of first node.
    {
        p = p->next;
    }
    else if(t->next == NULL)//when you want to delete value of last node.
    {
        q->next = NULL;
    }
    else// for others.
    {
        q->next = t->next;
    }
    q = p;
    printf("New List is : ");
    while(q)
    {
        printf("%d ",q->data);
        q=q->next;
    }
    printf("\n");
    return 0;
}