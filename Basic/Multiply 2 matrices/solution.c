#include <stdio.h>
 void print(int r[][10])
{ int i=0,j=0;
    for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
            printf("%d ",r[i][j]);
        printf("\n");
     }
     
}

void multiply(int c[][10], int d[][10], int r[][10])
{ int i=0,j=0,k=0, sum =0;
  for(k=0;k<3;k++)
  {
   for(i=0;i<3;i++)
   {    for(j=0;j<3;j++)
            sum += c[k][j]*d[j][i];
        r[k][i] = sum;
        sum = 0;
   }
    
}
  }
    

int main() {
	int c[10][10],d[10][10],r[10][10],t=0,n=3,m=3,i=0,j=0;
	scanf("%d\n",&t);
	while(t--)
	{//first array input
	    for(i=0;i<3;i++)
	     for(j=0;j<3;j++)
	       scanf("%d",&c[i][j]);
	    
	    //second array input
	    for(i=0;i<3;i++)
	     for(j=0;j<3;j++)
	       scanf("%d",&d[i][j]);
	       
	       multiply(c,d,r);
	       print(r);
	    
	 	}
	return 0;
}