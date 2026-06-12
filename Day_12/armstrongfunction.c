#include <stdio.h>
int isarmstrong(int);
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if (isarmstrong(n)){
        printf("the %d number is armstrong",n);
            
    }
    else{
        printf("the %d number is not armstrong",n);
    }
}
int isarmstrong(int n){
    int sum=0,original,d;
    original=n;
    while(n>0){
       d=n%10;
       sum=sum+d*d*d;
       n=n/10;
    }
    if(original==sum)
    return 1;
    else
    return 0;
}