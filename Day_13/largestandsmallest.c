#include <stdio.h>
int main(){
   int i, a[50],n,largest, smallest;
   printf("enter the no of element ");
   scanf("%d",&n);
   for (i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   largest=a[0];
   smallest=a[0];
   for (i=1;i<n;i++){
    if(a[i]>largest){
    largest=a[i];
    }
      if(a[i]<smallest){
    smallest=a[i];
    }
   }
   printf("the smallest and largest number are the");
   printf("%d\n%d",largest,smallest);

}