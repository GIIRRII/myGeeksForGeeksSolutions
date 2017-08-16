#include <stdio.h>
#include <math.h>

/*int decimal(int c[]){
    int i=0,j=0,n=0;
    for(i=7,j=0;i>=0;i--,j++)
    {   /*printf("pow =%d\n",(int)pow(2,j));
        printf("c[%d] =%d\n",i,c[i]);*/
    
       // n=n+(c[i]*pow(2,j)); 
        //printf("n%d=%d\n",j,n);
   // }
   // printf("n=%d\n",n);
 //   return n;
//}*/

int decimal(long N){
    int i=0,j=0,n=0,a=0;
    while(N>0)
    {   a = N%10;
        N = N/10;
        n += a*pow(2,i);
        i++;
    }
   // printf("n=%d\n",n);
    return n;
}

int main() {
	int c[8],t=0,i=0,r=0;
	long N =0;
	scanf("%d",&t);
	while(t--)
	{    scanf("%ld",&N);
	    /*for(i=0;i<8;i++)
	        scanf("%d",&c[i]);*/
	    printf("%d\n",decimal(N));
	    
	    
	}
	return 0;
}