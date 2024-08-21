#include<stdio.h>
void main()
{
int i=0,j,n,small,c=0,a[100],temp;
c=c+2;
printf("Enter the no. of elements");
c++;
scanf("%d",&n);
c++;
printf("Enter the elements");
c++;
c++;
for(i=0;i<n;i++)
{
c++;
scanf("%d",&a[i]);
c++;
}
c++;
for(i=0;i<n-1;i++)
{
c++;
small=i;
c++;
c++;
for(j=i+1;j<n;j++)
{
c++;
c++;
if(a[j]<a[small])
{
c++;
small=j;
}
}
c++;
if(small!=i)
{
temp=a[i];
c++;
a[i]=a[small];
c++;
a[small]=temp;
c++;
}
}
printf("sorted List is:\n");
c++;
c++;
for(i=0;i<n;i++)
{
c++;
printf("%d \t",a[i]);
c++;
}
printf("\n");
printf("\nThe space complexity is %d",(5*4)+(n*4));
 c++;
 printf("\nThe time complexity is %d",c++);
 }
