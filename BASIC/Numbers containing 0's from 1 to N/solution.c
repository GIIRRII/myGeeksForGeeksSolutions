#include<stdio.h>
unsigned containZero(int n)
{   if(n%10 == 0)
     return 1;
    else
        if(n>100)
         containZero(n/10);
        else
         return 0;
}

unsigned countNumber(int n)
{ int i=0, count = 0;
    if(n<10)
        return 0;
    else
    for (i=10;i<=n;i++ )
        count += containZero(i);
     return count;    
}

int main()
{    int t=0,n=0,i=0, count=0;
     scanf("%d", &t);
     while(t--)
     {
         scanf("%d",&n);
         printf("%d\n", countNumber(n));
      }
	return 0;
}