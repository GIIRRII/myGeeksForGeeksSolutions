#include <stdio.h>


int sum(int c[], int n)
{   int sum=0,i=0;
     
       
        for(i=0;i<n;i++)
        {   sum+=c[i];
        }
    
    
    return sum;
}


int main() {
	int c[1000],t=0,k=0,n=0,i=0;
//input no of test cases
scanf("%d",&t);
    while(t--)
    {
        //input size of array
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {   //input array element one by one
        scanf("%d",&c[i]);
        
    }
    
    printf("%d\n", sum(c,n));
    }

	return 0;
}