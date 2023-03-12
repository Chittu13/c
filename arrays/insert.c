#include<stdio.h>
int main()
{
int arr[100],i,n,p,v;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    printf("%d\n",arr[i]);
}
printf("enter the positon at value to be insert:\t");
scanf("%d",&p);
printf("enter the element to insert:\t");
scanf("%d",&v);
for(i=n-1;i>=p;i--)
{
    arr[i+1]=arr[i];
}
arr[p]=v;
n++;
for(i=0;i<n;i++)
{
    printf("%d\n",arr[i]);
}
   return 0;
}
