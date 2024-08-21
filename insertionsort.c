#include <stdio.h>
void main() 
{
    int n,i,j,temp,c=0,a[100];
    c=c+1;
    printf("Enter the number of elements: ");
    c++;
    scanf("%d", &n);
    c++;
    printf("Enter the elements:\n");
    c++;
    c++;
    for(i=0;i<n;i++) 
    {
  	c++;  
        scanf("%d", &a[i]);
    	c++;
    }
    c++;
    for(i=1;i<n;i++) 
    {
 	c++;
        temp=a[i];
        c++;
        j=i-1;
        c++;
    
     c++;
     while(j>=0 && a[j]>temp) 
      {
      		c++;
          a[j+1]=a[j];
          c++;
    	  j--;
      }
   
      a[j+1]=temp;
      c++;
    }
    printf("Sorted array:\n");
    c++;
    c++;
    for(i=0;i<n;i++) 
    {
    c++;
    c++;
    printf("%d\t",a[i]);
    }
    printf("\n");
    c++;
printf("\nThe space complexity is %d",(5*4)+(n*4));
 c++;
 printf("\nThe time complexity is %d",c++);
 }
