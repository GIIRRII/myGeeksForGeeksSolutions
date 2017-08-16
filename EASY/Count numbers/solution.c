#include <stdio.h>
int count(int n)
{   int po=1,msd=0;
    if(n<3)
     return n;
    if(n>=3&&n<10)
        return n-1;
    
    while( n/po > 9 )
        po=po*10;
    
    msd = n/po;
    
    if(msd!=3)
        return count(msd)*count(po-1)+count(msd)+count(n%po);
    else
        return count(msd*po-1);
}
int main() {
    int t=0,n=0,i=0;
    scanf("%d", &t);
    while(t--)
    {
       scanf("%d",&n);
       printf("%d\n",count(n));
    }
	
	return 0;
}