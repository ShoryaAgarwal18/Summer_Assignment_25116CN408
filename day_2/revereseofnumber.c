#include<stdio.h>
int main(){
    int n,d,rev=0;
    printf("enter the digit");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    printf("the rev of number is=%d",rev);
    return 0;
}