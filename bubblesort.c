#include<stdio.h>
int main(){
    int n,i,j,a[100],temp;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Original array is\t");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
      printf("\nThe sorted array is\t");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
