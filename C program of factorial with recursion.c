#include<stdio.h>
    long long factorial(int n){
    if(n==0||n==1)
    return 1;
    else
    return n*factorial(n-1);
}

int main(){
    int num;
    printf("Enter a positive number: ");
    scanf(" %d",&num);
    if(num<0){
    printf("Factorial is not defined for negative numbers");
     }else{
     printf("Factorial of %d = %lld",num,factorial(num));
     }

}