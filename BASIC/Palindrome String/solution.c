#include <stdio.h>

enum {false, true};

int palindrome(char c[], int n)
{   int paln = true;
    int i=0;
    
    for(i=0;i<=(n/2);i++)
    {
        if(c[i]!=c[n-1-i])
        {    
            paln = false;
            break;
        }
        
        
    }
    
    return paln;
}


int main() {
	int t=0,n=0,i=0;
	char c[100];
    //input no of test cases
    scanf("%d",&t);
    while(t--)
    {
        //input aray size
        scanf("%d\n",&n);
        for(i=0;i<n;i++)
        {   //input character array element
            scanf("%c",&c[i]);
        }
        if(palindrome(c,n))
            printf("Yes\n");
        else 
            printf("No\n");
    }

	return 0;
}