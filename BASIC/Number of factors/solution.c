#include <stdio.h>

int factCount(int n)
{   int i=0,count=0;
     
    for(i=1;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            count++;
        }
        
    }
    count++;
    
    return count;
}


int main() {
	int t=0,n=0,i=0;
//input no of test cases
scanf("%d",&t);
    while(t--)
    {
        //input no
    scanf("%d",&n);
    
       
         
    
    printf("%d\n", factCount(n));
    }

	return 0;
}