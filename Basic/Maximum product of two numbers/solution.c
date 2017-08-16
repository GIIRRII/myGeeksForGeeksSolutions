#include <stdio.h>


int product(int c[], int n)
{   int i=0, j=0, maxProd=0,p=0;
     maxProd = c[0]*c[1];
    for(i=2;i<n;i++)
    {   
        for(j=i-1;j>=0;j--)
        {   if(maxProd < c[i]*c[j])
            maxProd = c[i]*c[j];
        }
    }
    
    return maxProd;
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
    
    printf("%d\n", product(c,n));
    }

	return 0;
}