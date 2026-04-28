#include <stdio.h>
int main() {
int size;
printf("Enter the no of elements to store:\n");
scanf("%d",&size);
int a[size];
for(int i=0;i<size-1;i++)
{
    printf("Enter the %d value\n",i+1);
    scanf("%d",&a[i]);
}
for(int i=0;i<=size-2;i++)
{
   for(int j=i+1;j<=size-1;j++)
   {
       if(a[i]==a[j])
       {
           a[j]=0;
       }
   }
}
printf("{");
for(int i=0;i<size-1;i++)
{
    printf("%d",a[i]);
}
printf("}");
}