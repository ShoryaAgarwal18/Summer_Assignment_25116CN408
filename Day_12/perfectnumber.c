#include <stdio.h>
int isperfect(int);
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(isperfect(n))
    printf("the number is perfect number");
    else
    printf("the number is not perfect number");
}
int isperfect(int n){
int i,original,sum=0;
original=n;
for(i=1;i<n;i++){
    if(n%i==0){
        sum=sum+i;
}
}
if(original==sum)
return 1;
else
return 0;
}