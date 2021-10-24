/**
 * @file Coping_one_list_to_another.cpp
 * @author Abu Bakar Siddik(City University 53-Batch,Dhaka)
 * @date 2021-10-24
 */
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
    q = p;
    //coping a list to another ...
    struct node *curr,*newhead;
    curr = new node;
    curr->data = q->data;
    curr->next = q->next;
    newhead = curr;
    curr = curr->next;
    q = q->next;
    while(q){
        curr->data = q->data;
        curr->next = q->next;
        q = q->next;
        curr = curr->next;
    }
    // ends here ...
    q = newhead;
    printf("Copied List is : ");
    while(q)
    {
        printf("%d ",q->data);
        q=q->next;
    }
    printf("\n");
    return 0;
}