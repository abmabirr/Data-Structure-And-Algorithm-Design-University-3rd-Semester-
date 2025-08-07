#include<stdio.h>
    int main(){
    int arr[6]={10,20,30,40,50,60};
    int low=0,high=5,mid,key;
    printf("Enter the number to search: ");
    scanf("%d",&key);
    
    while(low<=high){
    mid=low+high/2;
    if(arr[mid]==key){
    printf("Number found at position %d\n",mid+1);
    return 0;
     }  else if(arr[mid]<key){
     low=mid+1;
 }else{
     high=mid-1;
     }
    
    }
    
    printf("Number not found in the array.\n");
 return 0;
    
    
}