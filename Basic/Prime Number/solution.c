#include <stdio.h>
#include <stdbool.h>

bool prime(int n)
{   int c[14]={2,3,5,7,11,13,17,23,29,31,37,41,43,47};
    int i=0,count=0;
    bool prime = false;
    
    while(i<14)
    {
        if(n%c[i] == 0 && n != c[i])
        {   
            prime = false;
            break;
        }
        else
        if(n==c[i])
        { 
        prime = true;
        break;
        }
        else
        {
        prime = true;
        i++;
        }
        
    }
     
    return prime;
}


int main() {
	int t=0,n=0,i=0;
    //input no of test cases
    scanf("%d",&t);
    while(t--)
    {
        //input no
        scanf("%d",&n);
        if(prime(n))
            printf("Yes\n");
        else
            printf("No\n");
        
        
    }

	return 0;
}