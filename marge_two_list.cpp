/**
 * @file marge_two_list.cpp(unsorted)
 * @author Abu Bakar Siddik(City UNiversity 53-Batch,Dhaka)
 * @date 2021-10-24
 */
#include <stdio.h>
struct node{
    int data;
    struct node* next;
};
int main()
{
    struct node *First,*Second,*Marged,*tmp,*tmp2,*tmp3;
    int x;
    First = new node;
    printf("Enter The Value of First Linked List : ");
    scanf("%d",&First->data);
    printf("Enter the next value : ");
    scanf("%d",&x);
    tmp = First;
    Marged = First;
    tmp3 = Marged;
    while(x){
        tmp2 = new node;
        tmp2->data = x;
        tmp3->next = tmp2;
        tmp3 = tmp->next;
        tmp->next = tmp2;
        tmp = tmp->next;
        printf("Enter the next value: ");
        scanf("%d",&x);
    }
    tmp->next = NULL;
    tmp = First;
    printf("First List : ");
    while(tmp){
        printf("%d ",tmp->data);
        tmp =tmp->next;
    }
    printf("\n");
    Second = new node;
    printf("Enter The Value of Second Linked List : ");
    scanf("%d",&Second->data);
    printf("Enter the next value : ");
    scanf("%d",&x);
    tmp = Second;
    while(x){
        tmp2 = new node;
        tmp2->data = x;
        tmp3->next = tmp2;
        tmp3 = tmp->next;
        tmp->next = tmp2;
        tmp = tmp->next;
        printf("Enter the next value: ");
        scanf("%d",&x);
    }
    tmp->next = NULL;
    tmp3->next = NULL;
    tmp = Second;
    printf("Second List : ");
    while(tmp){
        printf("%d ",tmp->data);
        tmp =tmp->next;
    }
    printf("\n");
    tmp = Marged;
    printf("Marged List : ");
    while(tmp){
        printf("%d ",tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
    return 0;
}