#include <stdio.h>
int ispalindrome(int);
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if (ispalindrome(n)){
        printf("the %d number is palindrome",n);
    }
    else{
        printf("the %d number is not palindrome",n);
    }
}
int ispalindrome(int n){
    int rev=0,original,d;
    original=n;
    while(n>0){
       d=n%10;
       rev=rev*10+d;
       n=n/10;
    }
    if(original==rev)
    return 1;
    else
    return 0;
}