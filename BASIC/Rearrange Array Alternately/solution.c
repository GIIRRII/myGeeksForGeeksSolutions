#include<stdio.h>
void rearrange(int c[], int d[],int n){
    int k=n,i=0,j=0;
    for(i=0;j<k&&i<=(n-1);i++,n--,j +=2)
    {
        d[j] = c[n-1];
        d[j+1] = c[i];
    }
    
}
int main()
{    int t=0,n=0,i=0,c[100],d[100];
     scanf("%d", &t);
     while(t--)
     {
         scanf("%d",&n);
         for(i=0;i<n;i++)
            scanf(" %d",&c[i]);
          rearrange(c,d,n);
          for(i=0;i<n;i++)
            printf("%d ",d[i]);
          printf("\n");
      }
	return 0;
}