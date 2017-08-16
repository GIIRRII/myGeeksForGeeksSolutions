#include <stdio.h>
#define N 10000
void sieveOfEratosthenes(int n){
    int a[N]={0}, i=0,j=0;
    
    for(i=2;i*i<=n;i++){
        if(a[i] == 0){
            for(j=i*2;j<=n;j+=i)
               {
                    a[j] = 1;
               }
        }
    }
    
    for(i=2;i<=n;i++)
    {
        if(a[i] == 0 && a[n-i] == 0 )
        {
            printf("%d %d\n", i,n-i);
            //printf("%d %d\n", a[i],a[n-i]);
            break;
        }
    }
}

int main() {
	int t=0,n=0;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    sieveOfEratosthenes(n);
	    //printf("\n");
	}
	return 0;
}