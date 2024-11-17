#include<stdio.h>
#include<stdlib.h>
struct node{
    int coeff;
    int expo;
    struct node *link;
}*rhead=NULL,*phead=NULL,*qhead=NULL,*p=NULL,*q=NULL,*r=NULL;
struct node* createnode(int coeff,int expo){
    struct node* newnode= (struct node*)malloc(sizeof(struct node));
    newnode->expo=expo;
    newnode->coeff=coeff;
    newnode->link=NULL;
    return newnode;
}
void printpoly(struct node *head){
    struct node *p=head;
    while(p!=NULL){
        if(p->link==NULL)
        printf("(%dx^%d)",p->coeff,p->expo);
        else
        printf("(%dx^%d) +",p->coeff,p->expo);
       
        p=p->link;
    }
}
int main(){
    int n1,n2,i,coeff,expo;
    printf("Enter the no of terms of 1st polynomial");
    scanf("%d",&n1);
    for(i=0;i<n1;i++){
        printf("Enter the coeff and expo of term %d ",i+1);
        scanf("%d%d",&coeff,&expo);
        struct node *temp= createnode(coeff,expo);
        if(phead==NULL){
            phead=temp;
            p=temp;
        }else{
            p->link=temp;
            p=temp;
        } } 
    printf("Enter the no of terms of 2nd polynomial");
    scanf("%d",&n2);
    for(i=0;i<n2;i++){
        printf("Enter the coeff and expo of term %d ",i+1);
        scanf("%d%d",&coeff,&expo);
        struct node *temp= createnode(coeff,expo);
        if(qhead==NULL){
            qhead=temp;
            q=temp;
        }else{
            q->link=temp;
            q=temp;
        } } 
printf("First polynomial= ");
printpoly(phead);
printf("\nSecond Polynomial= ");
printpoly(qhead);
p=phead;
q=qhead;
while(p!=NULL || q!=NULL){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if(p!=NULL && (q==NULL || p->expo>q->expo)){
        temp->expo= p->expo;
        temp->coeff=p->coeff;
        p=p->link;
    }else if(q!=NULL && (p==NULL || q->expo>p->expo)){
        temp->coeff=q->coeff;
        temp->expo=q->expo;
        q=q->link;
    }else{
        temp->coeff=(p->coeff+q->coeff);
        temp->expo=p->expo;
        p=p->link;
        q=q->link;
    }
    temp->link=NULL;
    if(rhead==NULL){
        rhead=temp;
        r=temp;
    }else{
        r->link=temp;
        r=temp;
    }}      
printf("\nResultant polynomial= ");   
printpoly(rhead);
} 
