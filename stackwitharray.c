#include<stdio.h>
int top=-1,stack[100];
int i,n;
void push();
void pop();
void display();
int main(){
    int ch;
    printf("Enter the no of elements of the stack");
    scanf("%d",&n);
    while(ch!=4){
    printf("Enter the operation to perform");
    printf("1.INSERT 2.DELETE 3.DISPLAY 4.EXIT");
    scanf("%d",&ch);
     switch (ch)
     {
     case 1: push();
             break;
     case 2: pop();
             break;
     case 3: display();
             break;
     case 4: printf("Exiting");
             break;
     default: printf("Invalid");
     }}

}
void push(){
    if(top==(n-1)){
        printf("Overflow.. The stack is full");
    }
    else{
        int x;
        printf("Enter inserting value");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop(){
    if(top==-1)
    printf("Underflow");
    else{
        printf("The deleted element is %d",stack[top]);
        top--;
    }
}
void display(){
    if(top==-1)
    printf("Stack is empty");
    else{
        for(i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}