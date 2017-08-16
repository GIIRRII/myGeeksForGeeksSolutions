#include<stdio.h>
int main()
{    int t=0,n=0,i=0,j=0,d[100],c[100],max;
     scanf("%d", &t);
     while(t--)
     {
         scanf("%d",&n);
         for(i=0;i<n;i++)
            scanf("%d",&c[i]);
            max = -1;
         for(i=n-1;i>=0;i--)
         {
             if(max<c[i])
             {
                 max = c[i];
                 d[j++] = c[i];
                // printf("%d ",c[i]);
             }
             
         }
         while(j>0)
            printf("%d " , d[--j]);
         
         printf("\n");
      }
	return 0;
}