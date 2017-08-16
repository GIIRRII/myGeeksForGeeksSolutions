#include <stdio.h>
#define N 10000


void sieveOfEratosthenes(long n){
    int a[N]={0};
    long i=0,j=0;
    
    for(i=2;i*i<=n;i++){
        if(a[i]==0){
            for(j=i*2;j<=n;j+=i)
               a[j] = 1;
        }
    }
    
    for(i=2;i<=n;i++)
     {   if( a[i] == 0 )
            printf("%ld ", i);
     }
}


int main() {
	int t=0;
	long n=0;
	scanf("%d",&t);
	while(t--){
	    scanf("%ld",&n);
	    sieveOfEratosthenes(n);
	    printf("\n");
	}
	return 0;
}