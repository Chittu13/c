#include<stdio.h>
int main()
{
int arr[100],i,n,p;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    printf("%d\n",arr[i]);
}
printf("enter the positon at value to be deleted:\t");
scanf("%d",&p);
for(i=p;i<n;i++)
{
    arr[i]=arr[i+1];
}

n--;
for(i=0;i<n;i++)
{
    printf("%d\n",arr[i]);
}
   return 0;
}