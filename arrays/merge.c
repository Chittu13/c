#include<stdio.h>
int main()
{
int arr1[100],arr2[100],arr3[100],i,j,n1,n2;
scanf("%d",&n1);
scanf("%d",&n2);
for(i=0;i<n1;i++)
{
    scanf("%d",&arr1[i]);
}
for(i=0;i<n2;i++)
{
    scanf("%d",&arr2[i]);
}
int n3=n1+n2;
for(i=0;i<n1;i++)
{
   arr3[i]=arr1[i]; 
}
for(i=0,j=n1;i<n2&&j<n3;i++,j++)
{
    arr3[j]=arr2[i];
}
printf("printing merged array elements:\t");
for(i=0;i<n3;i++)
{
    printf("%d\n",arr3[i]);
}
   return 0;
}