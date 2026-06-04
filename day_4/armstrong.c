#include<stdio.h>
int main(){
    int n,d,sum=0,original;
    printf("enter the number");
    scanf("%d",&n);
    original=n;
    while(n>0){
        d=n%10;
        sum=sum+d*d*d;
        n=n/10;
    }
    if(original==sum){
        printf("the number is armstrong");
    }
    else{
         printf("the number is not armstrong");
    }    
}