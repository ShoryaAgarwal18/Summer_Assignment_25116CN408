#include<stdio.h>
int main(){
    int n,d,sum,original,starting,ending,i;
    printf("enter the starting number");
    scanf("%d",&starting);
    printf("enter the ending number");
    scanf("%d",&ending);
    for(i=starting;i<=ending;i++){
     n=i;
    original=n;
    sum=0;
    while(n>0){
        d=n%10;
        sum=sum+d*d*d;
        n=n/10;
    }
    if(original==sum){
        printf(",%d",original);
    }
}

}