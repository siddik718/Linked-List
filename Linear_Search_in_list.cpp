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
    int search_val;
    printf("Enter Search Value : ");
    scanf("%d",&search_val);
    q = p;
    int ok = 1;
    while(q)
    {
        if(q->data == search_val){
            ok = 0;
            printf("Found\n");
            break;
        }
        q=q->next;
    }
    if(ok)printf("Not Found\n");
    return 0;
}