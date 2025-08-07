#include<stdio.h>
    int main(){
    int arr[5]={10,20,30,40,50};
    int key,i;
    printf("Enter the number to search: ");
    scanf("%d",&key);
    for(i=0;i<5;i++){
    if(arr[i]==key){
    printf("The number is found at the position at %d\n",i+1);
   return 0;
    }
 }   
    printf("Number not found in the array.\n");
    
    return 0;
}    