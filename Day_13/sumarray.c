#include <stdio.h>
int main(){
   int i, a[50],n,sum=0,avg;
   printf("enter the no of element ");
   scanf("%d",&n);
      printf("enter the  element ");

   for (i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   printf("sum and avg are \n");
   for (i=0;i<n;i++){
    sum=sum+a[i];
   }
   avg=sum/n;
    printf("%d%d",sum,avg);

}