#include <stdio.h>
int sum(int n)
{
    int sum = 0;
    while (n>0)
    {
        sum +=(n%10);
        n/=10;
        
    }
    return sum;
}

int main() {
	int t=0,i=0,k=0;
	//input test cases
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&k);
	    printf("%d\n",sum(k));
	}
	return 0;
}