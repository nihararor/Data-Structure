#include<stdio.h>
char stack[100];
int top= -1;
void push(char a)
{
    stack[++top] = a;
}
char pop()
{
    if(top== -1)
        return -1;
    else
        return stack[top--];
}
int precedence(char a)
{
    if(a == '(')
        return 0;
    if(a == '+' || a == '-')
        return 1;
    if(a == '*' || a == '/')
        return 2;
}
 
void main()
{
    char expression[20];
    char *exp, a;
    printf("Enter the expression you want to convert:  ");
    scanf("%s",expression);
    exp = expression;
    while(*exp != '\0')
    {
        if(isalnum(*exp))
            printf("%c",*exp);
        else if(*exp == '(')
            push(*exp);
        else if(*exp == ')')
        {
            while((a = pop()) != '(')
                printf("%c", a);
        }
        else
        {
            while(precedence(stack[top]) >= precedence(*exp))
                printf("%c",pop());
            push(*exp);
        }
        exp= exp + 1;
    }
    while(top!= -1)
    {
        printf("%c",pop());
    }
}
