#include<stdio.h>
void main()
{
 int count=0,i,n,c=0,a[100],search;
 c=c+2;
 printf("Enter the size of array");
 c++;
 scanf("%d",&n);
 c++;
 printf("Enter the elements");
 c++;
 for(i=0;i<n;i++)
 {
  c++;
  scanf("%d",&a[i]);
  c++;
 }
 c++;
 printf("Enter the no to be searched");
 c++;
 scanf("%d",&search);
 c++; 
 for(i=0;i<n;i++)
 {
  c++; 
  c++;
  if(a[i]==search)
  {
  count++;
  c++;
  printf("\nElement found at %d",i+1);
  c++;
  } 
 }
 c++;
 c++;
 if(count>0)
 {
 printf("\nThe element is found %d times",count);
 c++;
 }
 else
 {
 printf("Element not found");
 c++;
 }
 printf("\nThe space complexity is %d",(5*4)+(n*4));
 c++;
 printf("\nThe time complexity is %d",c++);
 }

 
 
