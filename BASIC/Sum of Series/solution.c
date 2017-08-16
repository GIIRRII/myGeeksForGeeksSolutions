#include <stdio.h>

int main() {
    int t=0,n=0,i=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%d\n",(n*(n+1))/2);
    }
	
	return 0;
}