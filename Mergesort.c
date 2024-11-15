#include<stdio.h>
/*MERGE FUNCTION*/
void merge(int a[], int left, int mid, int right){
    int i=left,j=mid+1,k=0,temp[100];
while(i<=mid && j<=right){ /*comparing both arrays and insert elements in ascending order*/
    if(a[i]<a[j]){
        temp[k++]=a[i++];
    }else{
        temp[k++]=a[j++];
    }
}
    while(i<=mid){/*when right array ends and only left array remains*/
    temp[k++]=a[i++];/*Add all remaining parts to sorted array*/
}
    while(j<=right){
    temp[k++]=a[j++];
}
for(i=left;i<=right;i++){
    a[i]=temp[i-left];  
}

}

/*MERGESORT FUNCTION */
void mergesort(int a[],int left,int right){
    if(left<right){
    int mid=(left+right)/2;
    mergesort(a,0,mid); /*recursively calling to sort the left part*/
    mergesort(a,mid+1,right);/*Called to sort right part of array*/
    merge(a,left,mid,right);/*merge the divided parts*/
}}
/*MAIN BODY*/
int main(){
    int n, a[100];
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the elemetns");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The original array\t");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
     mergesort(a,0,n-1);

    printf("\nThe sorted array\t");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

}
