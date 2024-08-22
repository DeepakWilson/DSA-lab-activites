#include<stdio.h>
void main()
{
  int temp,i,j,limit,pass,t;t++;
  int arr[30];
  
  printf("enter the number of elements:");
  scanf("%d",&limit);
  t++;t++;

  printf("enter the elemnts");
  t++;
  for( i=0;i<limit;i++){
    scanf("%d",&arr[i]);
    t++;t++;
  }

  for(pass=0;pass<limit-1;pass++){
    for(j=0;j<limit-pass-1;j++){

      if(arr[j]>arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
  t++;t++;
  printf("the sorted array is");
  t++;
  for(i=0;i<limit;i++){
    printf(" %d ",arr[i]);
    t++;t++;
  }
  printf("Time complexity=%d\n",t);
  printf("Space complexity=%d\n",(4*7)+limit);
}

	

