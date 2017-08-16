#include <stdio.h>
long fact(int n)
{
    long fact = 1;
    while (n>1)
    {
        fact*=n;
        n--;
    }
    return fact;
}
int main() {
	int t=0,i=0,k=0;
	//input test cases
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&k);
	    printf("%ld\n",fact(k));
	}
	return 0;
}