#include <stdio.h>
#include <stdlib.h>
void swap(char *a, char *b)
{
    char t = *a;
    *a = *b;
    *b = t;
}
void sortString(char *c,int n)
{ char small;
   int i=0,j=0;
   
  for(i=1;i<n;i++)
  {  small = c[i];
    for(j=(i-1);(j>=0)&&c[j]>small;j--)
        c[j+1] = c[j];  
    c[j+1] = small;
    
  } 
}

void printString(char *c)
{
    printf("%s\n",c);
}

int main() {
	int t=0,i=0,n=0,j=0;
	char c[100], small;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    scanf("%s",c);
	   /*  for(i=1;i<n;i++)
        {  
            small = c[i];
            for(j=(i-1);(j>=0 &&c[j]>small);j--)
               c[j+1] = c[j];  
            c[j+1] = small;
            
    
        } */
	    sortString(c,n);
	    printString(c);
	}
	return 0;
}