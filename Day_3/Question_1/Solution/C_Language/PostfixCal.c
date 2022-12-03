#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
struct Stack
{
     float arr[50];
    int tos;
};

typedef struct Stack Stack;
void push(struct Stack *,float);
float pop(struct Stack*);
int isoprnd(char);
float cal(float a,float b,char ch);
float sol(char []);

void main()
{
    char postfix[50];
    float out;
    printf("Enter the postfix expression = \n");
    scanf("%s",postfix);
    out=sol(postfix);
    printf("Result of postfix expression = %f\n",out);
}

float sol(char postfix[])
{
    Stack S;
    int i;
    char ch;
    float a,b,c;
    S.tos=-1;
    for(i=0;postfix[i]!='\0';i++)
    {
        ch=postfix[i];
        if(isoprnd(ch)==1)
        {
            push(&S,ch-'0');
        }
        else{
            b=pop(&S);
            a=pop(&S);
            c=cal(a,b,ch);
            push(&S,c);
        }
    }
    c=pop(&S);
    return c;
}

void push(struct Stack *p,float x)
{
    //if(p->tos==4)
   // {
    //    printf("Stack is Overflow");
    //    return 0;
   // }
    p->tos+=1;
    p->arr[p->tos]=x;
    //p->arr[++top] = x;
}

float pop(struct Stack *p)
{
    int x;
    //if(p->tos==-1)
    //{
       // printf("\nStack is Underflow");
     //   return 0;
    //}
    x=p->arr[p->tos];
    (p->tos)--;
    return x;
}

float cal(float a,float b,char ch)
{

    int ans;
    switch(ch)
    {
        case '+': ans = a+b;
        break;
        case '-': ans = a-b;
        break;
        case '*': ans = a*b;
        break;
        case '/': ans = a/b;
        break;
        case '$': ans = pow(a,b);
        break;
    }
    return ans;
}

int isoprnd(char x)
{
    if(isdigit(x))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
