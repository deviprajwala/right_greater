#include<stdio.h>

void main()
{
 int i,a[25],n,max,j;
 printf("Enter the number of elements\n");
 scanf("%d",&n);
 printf("Enter the elements\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
   max=a[i];
   for(j=i+1;j<n;j++)
   { 
      if(a[j]>max)
      {
        max=a[j];
      }
   }
   if(max==a[i])
   {
     printf("%d",a[i]);
   }
 }
 
}



