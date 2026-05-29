#include<stdio.h>
int main(){
    int n,d,original,rev=0;
    printf("enter the digit");
    scanf("%d",&n);
    original=n;
    while(n>0){
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(original==rev){
    printf("the number is palindrome");}
    else {
        printf("the number is not palindrome");
    }
    return 0;
}