#include<stdio.h>
#include<conio.h>
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

void main(){
    int n;
    printf("Enter a non negativer number = ");
    scanf("%d",&n);
    if(n<0){
        printf("ERROR!! Enter positive number  = ");
    }else{
        int result =factorial(n);
        printf("%d! = %d\n",n,result);
    }
    getch();
}
