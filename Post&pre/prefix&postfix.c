#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack 
{
    char*arr; 
    int tp;
};
struct stack *p;
int n;
int isempty()
{
    if(p->tp==-1)
    {
        return 1;
    }
    return 0;
}
int isfull()
{
    if(p->tp==n-1)
    {
        return 1;
    }
    
    return 0;
}
 void push(char k)
 {
    if(isfull())
    {
        printf("stack is full");
    }
    p->tp++;
    p->arr[p->tp]=k;
 }
char pop()
{
    char k;
   if(isempty())
   {
    return'\0';
   } 
   k=p->arr[p->tp];
   p->tp--;
   return k;
}
int isoperator(char k)
{
    if(k=='*'||k=='+'||k=='-'||k=='/'||k=='^')
    {
        return 1;
    }
    return 0;
}
int isoperend(char k)
{
    if(k>='a'&&k<='z'||k>='A'&&k<='Z')
    {
        return 1;
    }
    return 0;
}
int prec(char k)
{
    if(k=='+'||k=='-')
    {
        return 1;
    }
    else if (k=='*'||k=='/')
    {
      return 2;
    }
    else if (k=='^')
    {
        return 3;
    }
    return -1;
} 
char stop()
{
    char k;
    k=p->arr[p->tp];
    return k;
}
char* posfi(char * n )
{
char* k;
 int o=strlen(n);
 k=(char*)malloc(o*sizeof(char));
 int i=0,j=0;
 for(i=0;n[i]!='\0';i++)
{
   if(isoperend(n[i]))
    {
        k[j]=n[i];
        j++;
    }
    else if(n[i]=='(')
    {
        push(n[i]);
    }
    else if(n[i]==')')
    {
        while(!isempty()&&stop()!='(')
        {
            k[j]=pop();
            j++;
        }
        pop();/*pop that remainig'(' */
    }
    else 
    {
        while(!isempty()&&prec(n[i])<=prec(stop()))
        {
            k[j]=pop();
            j++;   
        }
        push(n[i]);
    }
}

while(!isempty())
{
    k[j]=pop();
    j++;
}
k[j]='\0';
return k;/*return the array*/
}
void reve(char*arr)/*fuction to reverse string*/
{ 
    int i=0;
    int j;
   char *z;
   z=(char*)malloc(strlen(arr)+1);
   j=strlen(arr);
   z[j]='\0';
   j--;
    while(arr[i]!='\0')
    {
        z[j]=arr[i];
        j--;
        i++;
    }
    strcpy(arr,z);
}
void bracket(char* arr)
{
    int i=0;
    while(arr[i]!='\0')
    {
        if(arr[i]=='(')
        {
            arr[i]=')';
        }
        else if(arr[i]==')')
        {
            arr[i]='(';
        }
        i++;
    }
}
 char* prefix(char*arr)
{
 char*k;
    reve(arr);
    bracket(arr);
   k=posfi(arr);
    reve(k);
   strcpy(arr,k);
}
int main()
{
p=(struct stack*)malloc(sizeof(struct stack));
printf("enter the size of expression:\t");
scanf("%d",&n);
 p->arr=(char*)malloc(sizeof(char)*n);
p->tp=-1;
char *m;
m=(char*)malloc(n);
printf("enter the equation:\t");
scanf("%s",m);
char *arr;
arr=posfi(m);
 printf("post equation is :%s\n",arr);
prefix(m);
 printf("prefix equation is :%s\n",m);
return 0;
}