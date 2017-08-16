#include <stdio.h>
#include <math.h>

int digit(int m, int n, int k)
{
    long a = pow(m,n), rem=0 ;
    while(k--)
    {
        rem = a%10;
        a= a/10;
    }
    return rem;
}

int main() {
	int t=0,i=0,k=0,m=0,n=0;
	//input test cases
	scanf("%d",&t);
	while(t--)
	{   //input no  
	    scanf("%d %d %d", &m, &n, &k);
	    printf("%d\n",digit(m,n,k));
	}
	return 0;
}