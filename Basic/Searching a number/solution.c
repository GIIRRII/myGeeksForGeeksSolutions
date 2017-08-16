#include <stdio.h>
int search(long c[], int n, long k)
{   int i=0;
    for(i=0;i<n;i++)
    {   
        if(c[i] == k)
            return (i+1);
    }
    return -1;
}


int main() {
	int t=0,n=0, i=0;
	long c[10000],k = 0; 
    //input no of test cases
    scanf("%d",&t);
    while(t--)
    {
        //input size of array
    scanf("%d",&n);
    //input elemnt to be searched
    scanf("%ld",&k);
    for(i=0;i<n;i++)
    {   //input array element one by one
        scanf("%ld",&c[i]);
        
    }
    
    printf("%d\n", search(c,n,k));
    }

	return 0;
}