#include <stdio.h>
#include <string.h>
char stack[20], postfix[20];
int i, size = 20;
int tops = -1;
int topp = -1;
int cont = -1;

int prior(char a)
{
    switch (a)
    {
    case '(':
        return 1;
        break;
    case ')':
        return 1;
        break;
    case '+':
        return 2;
        break;
    case '-':
        return 2;
        break;
    case '/':
        return 3;
        break;
    case '*':
        return 3;
        break;
    case '^':
        return 4;
        break;
    default:
        return 0;
    }
}
void pushs(char a)
{
    if (tops == size - 1)
    {
        printf("Overflow");
    }
    else
    {
        tops++;
        stack[tops] = a;
    }
}
void pushp(char a)
{
    if (topp == size - 1)
    {
        printf("overflow");
    }
    else
    {
        topp++;
        postfix[topp] = a;
    }
}
void pops(char a)
{
    if (tops == -1)
    {
        printf("underflow");
    }
    else
    {
        tops--;
        pushp(stack[tops]);
        stack[tops] = a;
    }
}
void itop(char exp[])
{
    for (i = 0; exp[i] != '\0'; i++)
    {
        if (((int)exp[i] >= 65 && (int)exp[i] <= 90) || ((int)exp[i] >= 97 && (int)exp[i] <= 122))
        {
            pushp(exp[i]);
        }
        else
        {
            if (tops == -1)
            {
                pushs(exp[i]);
            }
            else if (prior(stack[tops]) < prior(exp[i]))
            {
                pushs(exp[i]);
            }
            else if (prior(stack[tops]) >= prior(exp[i]))
            {
                pushs(exp[i]);
                do
                {
                    pops(exp[i]);
                } while (prior(stack[tops - 1]) >= prior(stack[tops]));
            }
        }
    }
}

void main()
{
    char exp[20];
    printf("Enter a Expression with Brackets around: ");
    gets(exp);
    itop(exp);   
    int x = strlen(postfix);
    for (int i = 0; i < x ; i++)
    {
        if (prior(postfix[i]) == 1)
        {
            continue;
        }
        else
            printf("%c", postfix[i]);
            
    }
}
