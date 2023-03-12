#include<stdio.h>
int main()
{
int arr[100],i,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
printf("printing array elements in order:\n");
for(i=0;i<n;i++)
{
    printf("%d\n",arr[i]);
}
printf("printing elements in reverse order:\n");
for(i=n-1;i>=0;i--)
{
    printf("%d\n",arr[i]);
}
   return 0;
}
