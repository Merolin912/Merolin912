#Write a C program to implement the following sorting algorithms using user defined functions:a.Bubblesort(Ascending order)b.Selectionsort(Descending order).
#include<stdio.h>
void main()
{
int a[10],i,j,n,min,temp;
printf("Enter a value of n");
scanf("%d",&n);
printf("Enter integer values\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
min=i;
for(j=i;j<n;j++)
{
if(a[j]>a[min])
{
min=j;
}
}
if(min!=i)
{
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
}
printf("The sorted array is");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
