#include<stdio.h>
int main()
{
int a[10],n,i,key;
printf("Enter value of n");
scanf("%d",&n);
printf("\n Enter any array values");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the key value");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(key==a[i])
{
printf("Number found at loc %d",i);
return 0;
}
}
printf("Number not found");
}


