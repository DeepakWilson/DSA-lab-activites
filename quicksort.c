#include<stdio.h>
int partition(int a[], int low, int high){
    int pivot= a[low];
    int temp;
    int i= low+1;
    int j=high;
    while(i<=j){
        while(i<=j && a[i]<=pivot){
            i++;
        }
        while(a[j]>pivot){
            j--;
        }
       if(i<j){
        temp= a[i];
        a[i]=a[j];
        a[j]=temp;
        }
    }
    temp=a[low];
    a[low]=a[j];
    a[j]=temp;
    return j;

}
void quicksort(int a[], int low, int high){
    if(low<high){
    int mid= partition(a,low,high);
    quicksort(a,low,mid-1);
    quicksort(a,mid+1,high);
}}

int main(){
    int n,a[100];
    printf("Enter the max number of elements ");
    scanf("%d",&n);
    printf("Enter the elements");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The entered array is");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    quicksort(a,0,n-1);
    printf("\nThe sorted array is");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}