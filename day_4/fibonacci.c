#include<stdio.h>
int main(){
    int i,n,firstdigit=0,seconddigit=1,thirddigit;
    printf("enter the number of term");
    scanf("%d",&n);
    printf("%d",firstdigit);
    printf(",%d",seconddigit);

    for(i=1;i<=n-2;i++){
        thirddigit=firstdigit+seconddigit;
        printf(",%d",thirddigit);
        firstdigit=seconddigit;
        seconddigit=thirddigit;
        
        
    }
    return 0;
}