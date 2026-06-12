#include <stdio.h>
void fibbonaci(int n);
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("the series is");
    fibbonaci(n);
    return 0;
}
void fibbonaci(int n){
    int first=0,second=1,third,i;
    printf(" %d%d",first,second);
    for(i=3;i<=n;i++){
        third=first+second;
        printf("%d",third);
        first=second;
        second=third;
    }
}