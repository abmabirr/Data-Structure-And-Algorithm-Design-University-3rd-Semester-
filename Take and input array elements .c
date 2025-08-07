#include<stdio.h>
int main(){
    int n,i;
    printf("Enter how many numbers you want to input: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d integers:",n);
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("The elements in the array are: \n");
    for(i=0;i<n;i++){
    printf("%d\n",arr[i]);
    }
    printf("\n");
    return 0;
    
}