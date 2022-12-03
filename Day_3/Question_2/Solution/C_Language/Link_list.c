#include <stdio.h>
#include <stdlib.h>
struct Stack
{
    int data;
    struct Stack *next;
};
int tra(struct Stack *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;

    }
}
int main()
{
   struct Stack * head;
   struct Stack * second;
   struct Stack * third;
   head=(struct Stack *)malloc(sizeof(struct Stack));
    second=(struct Stack *)malloc(sizeof(struct Stack));
    third=(struct Stack *)malloc(sizeof(struct Stack));
    head->data=7;
    head->next=second;
    second->data=8;
    second->next=third;
    third->data=7;
    third->next=NULL;
    tra(head);
}
