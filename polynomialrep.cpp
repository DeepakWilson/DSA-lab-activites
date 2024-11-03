#include<stdio.h>
struct polynomial{
    int exponent;
    int coefficient;
}p[100];
int main(){
    int i,n;
    printf("Enter the no of term of polynomial");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Enter the coefficient and exponent of term %d",i);
        scanf("%d%d",&p[i].coefficient,&p[i].exponent);
    }
    for(i=1;i<n;i++){
        printf("(%dx^%d)+",p[i].coefficient,p[i].exponent);
    }
    printf("(%dx^%d)",p[n].coefficient,p[i].exponent);
}  