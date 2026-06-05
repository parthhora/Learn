#include<stdio.h>
int main(){
    int n,arr1[100];
    printf("Enter number of elements to be entered in array: ");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("Enter an element: ");
        scanf("%d",&arr1[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d\t",arr1[i]);
    } 
    int temp,i=0,j=n-1;
    while (j>=i){
        temp=arr1[j];
        arr1[j]=arr1[i];   
        arr1[i]=temp; 
        j--;
        i++;
        } 
    printf("\nReversed array: ");
    for (int i=0;i<n;i++){
        printf("%d\t",arr1[i]);
    } 
    return 0;
}
