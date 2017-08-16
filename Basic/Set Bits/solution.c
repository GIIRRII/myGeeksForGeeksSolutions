/* 
Brian Kernighan’s Algorithm:
 Subtraction of 1 from a number toggles all the bits (from right to left) till the rightmost set bit(including the righmost set bit). So if we subtract a number by 1 and do bitwise & with itself (n & (n-1)), we unset the righmost set bit. If we do n & (n-1) in a loop and count the no of times loop executes we get the set bit count.
 Beauty of the this solution is number of times it loops is equal to the number of set bits in a given integer
 */
#include<stdio.h>
unsigned int countSetBits(long int n)
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
{    int t=0,i=0;
     long int n = 0;
     scanf("%d", &t);
     while(t--)
     {
         scanf("%ld",&n);
         printf("%d\n", countSetBits(n));
      }
	return 0;
}