#include <stdio.h>
int main(){
   int i, a[50],n;
   printf("enter the no of element ");
   scanf("%d",&n);
      printf("enter the  element ");

   for (i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   printf("display the element");
   for (i=0;i<n;i++){
    printf("%d",a[i]);
   }

}