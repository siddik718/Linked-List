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
    int pos;
    printf("Which Node You Want To Delete : ");
    scanf("%d",&pos);
    if(pos == 1){
        p = p->next;
    }
    else{
        q = p;r = p;
        for(int i = 1;i<=pos-1;i++){
            r = q;
            q = q->next;
        }
        r->next = q->next;
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