#include <stdio.h>

int main() {
	int t = 0, i = 0,c[100],n = 0, d = 0;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d",&n,&d);
	    for(i=0;i<n;i++)
	        scanf("%d",&c[i] );
	    for(i=d;i<n;i++)
	        printf("%d ",c[i]);
	    for(i=0;i<d;i++) 
	        printf("%d ",c[i]);
	    printf("\n");
	}
	return 0;
}


