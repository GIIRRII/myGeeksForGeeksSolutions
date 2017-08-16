#include <stdio.h>


int max(int c[], int n)
{   int max=c[0],i=0;
    for(i=1;i<n;i++)
    {   if(max < c[i])
         max=c[i];
        
    }
    
    return max;
}

int min(int c[], int n)
{   int min=c[0],i=0;
    for(i=1;i<n;i++)
    {   if(min > c[i])
         min=c[i];
        
    }
    
    return min;
}


int main() {
	int c[100],t=0,k=0,n=0,i=0;
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
    
    printf("%d ", max(c,n));
    printf("%d\n", min(c,n));
    }

	return 0;
}