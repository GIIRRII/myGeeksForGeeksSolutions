#include <stdio.h>
#include <string.h>
int main() {
	int t=0, n=0,i=0,j=0, temp=0;
	char c[30],d[30];
	scanf("%d " ,&t);
	while(t--){
	    i=0; j=0;
	    scanf("%s",c);
	    n = strlen(c);
	   // printf("%d ", n);
	    while (i<n-1)
	    {
	        if(c[i]!= c[i+1])
	           d[j++] = c[i++];
	       else
	           i++;
	         
	       
	    }
	    d[j++] = c[n-1];
	    
	    for(i=0;i<j;i++)
	    {
	        printf("%d",d[i]-48);
	    }
	    printf("\n");
	}
	return 0;
}