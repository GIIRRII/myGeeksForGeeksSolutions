#include<stdio.h>

unsigned int countDivision(int a [], int n, int m)
{   int  i =0 , count = 0, Tcount = 0;
    for(i=0;i<n;i++)
    {   count = 0;
    
        if(a[i]%m == 0)
          count = (a[i]/m);
        else
          count = ((a[i]/m) + 1) ;
        
        Tcount = Tcount + count; 
        
    }
    
    return Tcount;
}
int main()
{    int t=0,n=0,i=0,m=0, A[500];
     scanf("%d", &t);
     while(t--)
     {
         scanf("%d %d",&n , &m);
         for(i=0;i<n;i++)
         {   scanf("%d", &A[i]); }
            
         printf("%d\n",countDivision(A,n,m));
         
        
      }
	return 0;
}