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
    int new_val,pos;
    printf("Where You Want To Insert A Node : ");
    scanf("%d %d",&new_val,&pos);
    r = new node;
    r->data = new_val;
    r->next = NULL;
    q = p;
    if(pos == 1){
        r->next = p;
        p = r;
    }
    else{
        for(int i = 1;i<=pos-2;i++){
            q = q->next;
        }
        r->next = q->next;
        q->next = r;
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