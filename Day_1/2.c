#include<stdio.h>
int main(){
    int n,i,m;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
printf("%d *%d is =%d",n,i,(n*i));
printf("\n");
    }
    return 0;
}