#include<stdio.h>
void main()
{
 int i,n,k;
 int A[n];
 printf("Enter the total number of nodes");
 scanf("%d",&n);
 printf("Enter element of node");
 for(i=0;i<=k;i++){
  scanf("%d",&A[i]);
 }
 printf("Enter the position to check");
 scanf("%d",&k);
 if((k/2)!=0){
  printf("parent of %d is %d",A[k],A[k/2]);
 }
 else{
     printf("no parent\n");
   }
   if(2*k>n){
      printf("no left child\n");
   }
   else{
     printf("Left child of %d is :%d\n",a[k],a[2*k]);
   }
   if((2*k)+1>n){
     printf("no right child\n");
     }
   else{
   printf("Right child of %d is:%d\n",a[k],a[(2*k)+1]);
   }
   }
 
