#include <stdio.h>

int armstrongno(int n)
{   
    int i=0,sum=0;
    if(n>=100 && n<=1000)
    while(n>=1)
    {
       sum+=((n%10)*(n%10)*(n%10));
       n/=10;
        
    }
     
    
    
    return sum;
}


int main() {
	int t=0,n=0,i=0;
    //input no of test cases
    scanf("%d",&t);
    while(t--)
    {
        //input no
        scanf("%d",&n);
        if(n==armstrongno(n))
        printf("Yes\n");
        else 
        printf("No\n");
    }

	return 0;
}