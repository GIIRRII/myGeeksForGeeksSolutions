#include<stdio.h>
int main()
{    int t=0,n=0,i=0,c[1000];
     scanf("%d", &t);
     while(t--)
     {
         scanf("%d",&n);
         for(i=0;i<n-1;i++)
            scanf("%d",&c[i]);
        
        for(i=0;i<n;i++)
            if(c[i]!=i+1)
            {  printf("%d\n" , i+1);
              break;
            }
      }
	return 0;
}