#include<stdio.h>
int main(){
    int i,n,e,tree[50];
    printf("Enter the no of elements in the tree");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&tree[i]);
    }
    printf("Entered tree is= ");
    for(i=0;i<n;i++){
        printf("%d\t",tree[i]);
    }
    printf("Enter the node index to check: ");
    scanf("%d",&e);
    if(e>n){
        printf("Error! Not a valid node");
    }
    if(e<=0){
        printf("No parent node");
    }
    else{
        printf("\nThe parent node is at index %d, value= %d",(e-1)/2,tree[(e-1)/2]); 
    }
     if((2*e)+1>=n){
        printf("\nNo left child");
    }
    else{
        printf("\nThe left child is at index %d, with value= %d",(2*e)+1,tree[(2*e)+1]);
    }
    if((2*e)+2>=n){
        printf("\nNo right child");
    }
    else{
        printf("\nThe right child is at %d, with value= %d",(2*e)+2,tree[(2*e)+2]);
    }

     }

