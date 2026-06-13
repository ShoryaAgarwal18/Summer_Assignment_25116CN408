#include <stdio.h>
int main(){
   int i, a[50],n,evensum=0,oddsum=0;
   printf("enter the no of element ");
   scanf("%d",&n);
   for (i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   for (i=0;i<n;i++){
    if(a[i]%2==0){
    evensum=evensum+a[i];
    }
    else{
    oddsum=oddsum+a[i];
    }
   }
   printf("the even sum and old sum are the");
   printf("%d\n%d",evensum,oddsum);

}