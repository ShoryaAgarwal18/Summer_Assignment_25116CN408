#include <stdio.h>
int main(){
    int i,sum=0,n;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        printf("the number is perfect number");
    }
    else
    printf("the number is not a perfect number");
    return 0;
    
}