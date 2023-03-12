#include<stdio.h>
int main()
{
int arr[100],i,n,k;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    printf("%d\n",arr[i]);
}
printf("enter the element to search:\n");
scanf("%d",&k);
for(i=0;i<n;i++)
{ 
    if(k==arr[i])
{
    printf("Element found: \n")
    printf("%d",arr[i]);
}
}
   return 0;
}
