#include <stdio.h>
int main(){
    int i,sum=0,n,original,digit,fact;
    printf("enter the number");
    scanf("%d",&n);
    original=n;
    while(n>0){
        digit=n%10;
        fact=1;
        for(i=1;i<=digit;i++){
            fact=fact*i;
    }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==original){
        printf("the number is strong number");
    }
    else{
        printf("the number is not strong number");

    }
    return 0 ;
}