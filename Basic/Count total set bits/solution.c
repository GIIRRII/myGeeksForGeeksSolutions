#include<stdio.h>
 
/* Function to get no of set bits in binary
   representation of passed binary no. */
unsigned int countSetBits(int n)
{
    unsigned int count = 0;
    while (n)
    {
      n &= (n-1) ;
      count++;
    }
    return count;
}
 
int main()
{
     int t=0,n=0,i=0, sum=0;
     scanf("%d", &t);
     while(t--)
     {   sum = 0;
         scanf("%d",&n);
         for(i=1;i<=n;i++)
           sum += countSetBits(i);
         printf("%d\n", sum);
      }
	return 0;
}