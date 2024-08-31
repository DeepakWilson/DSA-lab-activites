#include<stdio.h>
int A[100],n,i;
int item,opt;
int front=-1;
int rear=-1;
void ENQUEUE(int item){
        if(rear==n-1){
            printf("Queue is FULL. Insertion is not possible.\n");
        }
        else if(front==-1){
        printf("Enter the item to be inserted: ");
        scanf("%d", &item);
        front=0;
        rear=0;
        A[rear]=item;
        }
        else{
        printf("Enter the item to be inserted: ");
        scanf("%d", &item);
        rear++;
        A[rear]=item;
        }
}
void DEQUEUE(){
        if(front==-1){
        printf("Queue is EMPTY\n");
        }
        else if(front==rear)
        {
        printf("Deleted item is %d",A[front]);
        front=-1;
        rear=-1;
        }
        else{
        printf("Deleted item is %d",A[front]);
        front++;
        }
        }
void DISPLAY(){
       
        if(front==-1){
            printf("Queue is EMPTY\n");
        }
        else{
        printf("The entered queue elements are:\n");
        for(i=front;i<=rear;i++){
        printf("%d\t", A[i]);
        }
        printf("\n");
        }
}
void main(){
printf("Enter the size of the queue: ");
scanf("%d", &n);
do{
printf("\nEnter the option: \n");
printf("1.ENQUEUE \n2.DEQUEUE \n3.DISPLAY \n4.EXIT\n");
scanf("%d", &opt);
    switch(opt){
            case 1: ENQUEUE(item);
                     break;
            case 2: DEQUEUE();
                    break;
            case 3: DISPLAY();
                    break;
            case 4: break;
            default: printf("Invalid option...");
}
}while(opt!=4);
}
