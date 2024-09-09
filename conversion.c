#include <stdio.h>
#include <ctype.h>
#include <string.h> 

int top = -1;
char stack[MAX];

void push(char);
int pop();
int priority(char);

void main() {
    push('(');
    char inf[MAX];
    int i=0;
    printf("Enter the infix expression :\n");
    scanf("%s", inf);
    printf("\nIt's postfix expression is :\n");
    while(inf[i] != '\0') {
        if(isalnum(inf[i])
            printf("%c ", inf[i]);
        else if(inf[i]== '(')
            push(inf[i]);
        else if(inf[i]== ')')
            while(pop() != '(');
        else {
            while(priority(stack[top]) >= priority(inf[i]) { 
                pop();
            }
            push(inf[i]);
        }
    i++;
    }
    while(top >= 0){
        pop();
    }
}

void push(char p) {
    top++;
    stack[top] = p;


int pop() {
    char x;
    x = stack[top];
    if(x != '(')
        printf("%c ",x);
    top--;
    return x;
}

int priority(char element){
    if(element == '^')
        return 3;
    else if(element=='*' || element=='/')
        return 2;
    else if(element=='+' || element=='-')
        return 1;
    else
        return 0;
}

