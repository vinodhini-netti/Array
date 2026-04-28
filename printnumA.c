#include <stdio.h>
void main()
{
int size;
printf("Enter the no of elements to store:\n");
scanf("%d",&size);
int a[size];
for(int i=0;i<size-1;i++)
{
    printf("Enter the %d value\n",i+1);
    scanf("%d",&a[i]);
}
printf("_________________\n{");
for(int i=0;i<size-1;i++)
{
    printf("%d",a[i]);
}
printf("}");
}
     