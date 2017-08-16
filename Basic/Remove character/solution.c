#include<stdio.h>
#include<string.h>

void removeChar(char c[], char d[], int n, int m){
    int j = 0,k = 0,i=0;
    for(j=0;j<m;j++)
    {   i=0;
        for(k=0;k<n;k++)
        {
            if(c[k] != d[j])
            {
                c[i++] = c[k];
            }
        }
        c[i] = '\0';
    }
    
}

int main()
{    int t=0,n=0,i=0;
     char c[50],d[50];
     scanf("%d", &t);
     while(t--)
     {
         scanf("%s",c);
         scanf("%s",d);
         n = strlen(c);
         i = strlen(d);
         removeChar(c,d,n,i);
        printf("%s\n",c);
      }
	return 0;
}