#include <stdio.h>

int main() {
	int t=0,n=0,i=0,m=0;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    m = n*n;
	    if(n>=100 && n<1000)
	        if(n== m%1000)
	            printf("Automorphic\n");
	        else 
	            printf("Not Automorphic\n");
	   else if(n == 1000)
	        if(n == m%10000)
	            printf("Automorphic\n");
	        else 
	            printf("Not Automorphic\n");
	   else if(n>10)
	   if(n == m%100)
	            printf("Automorphic\n");
	        else 
	            printf("Not Automorphic\n");
	   else
	   if(n == m%10)
	            printf("Automorphic\n");
	        else 
	            printf("Not Automorphic\n");
	}
	
	return 0;
}