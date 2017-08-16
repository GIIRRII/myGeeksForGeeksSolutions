#include <stdio.h>


int diffrence(int c[], int n)
{   int i=0, j=0, minDiff=0,d=0;
     minDiff = c[0]-c[1];
     if(minDiff<0)
        minDiff*=-1;
    for(i=2;i<n;i++)
    {   
        for(j=i-1;j>=0;j--)
        {   d=c[i]-c[j];
            if(d<0)
             d*=-1;
            if(minDiff > d)
            minDiff = d;
        }
    }
    
    return minDiff;
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
    
    printf("%d\n", diffrence(c,n));
    }

	return 0;
}