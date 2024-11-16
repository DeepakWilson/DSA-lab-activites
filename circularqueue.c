#include<stdio.h>
int i,n,ch,front=-1,rear=-1,q[100],item;
void enqueue(){
    if(front==(rear+1)%n){
        printf("Overflow");
    }else if(rear==-1 && front==-1){
        printf("enter the element to add ");
        scanf("%d",&item);
        front=0;
        rear=0;
        q[rear]=item;
    }else{
        printf("enter the element to add ");
        scanf("%d",&item);
        rear= (rear+1)%n;
        q[rear]=item;
    }}
void dequeue(){
    if(front==-1){
        printf("underflow error");
    }else if(front==rear){
    printf("the deleted element is %d",q[front]);
    front=-1;
    rear=-1;
    }else{
        printf("the deleted element is %d",q[front]);
        front=(front+1)%n;
    }}
void display(){
    if(front==-1 && rear==-1){
        printf("The list is empty");
    }else{
        /*additional true condition added to for loop*/
        for(i=front;1;i=(i+1)%n) { /*circ queue incrementing*/
            printf("%d\t",q[i]);
        if(i==rear) /*to stop at rear*/
        break;
        }}}
int main(){
    printf("Enter the no of elements");
    scanf("%d",&n);
    while(ch!=4){
    printf("\nChoose operation\n1.enqueue\t2.dequeue\t3.display\t4.exit");
    scanf("%d",&ch);
    switch(ch){
        case 1: enqueue(); break;
        case 2: dequeue(); break;
        case 3: display(); break;
        case 4: printf("Exiting...."); break;
    }}}
