#include<stdio.h>
void main()
{
int a[20],n,i,j,min;
printf("Enter a value of n");
scanf("%d",&n);
printf("Enter integer values\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
min=a[j];
a[j]=a[j+1];
a[j+1]=min;
}
}
}
printf("Array element in sorted order\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
