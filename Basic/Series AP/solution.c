#include <stdio.h>

int main() {
	int t=0,a=0,b=0,i=0, n=0,d=0, m=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        scanf("%d",&n);
        d = b-a;
        m = a + (n-1)*d;
        
        printf("%d\n",m);
    }
	
	return 0;
}