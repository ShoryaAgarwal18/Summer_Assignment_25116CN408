#include<stdio.h>
int main(){
    int n,i,prime,starting,ending;
    printf("enter the startingnumber");
    scanf("%d",&starting);
    printf("enter the endingnumber");
    scanf("%d",&ending);
    for(n=starting;n<=ending;n++){
        if(n<2)
        continue;
        prime=1;

    for(i=2;i<=n/2;i++){
        if(n%i==0){
        prime=0;
        break;
        }
    }
    if (prime==1)
    printf("%d",n);
    }
}