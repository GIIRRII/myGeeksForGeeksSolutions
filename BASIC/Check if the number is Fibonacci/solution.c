#include <stdio.h>

int fibonacci(int n){
    int a=-1,b=1,c=0;
    while(b<n){
        
        c=b;
        b=a+b;
        a=c;
    }
    
    if(b==n)
        return 1;
    
    return 0;
}
    

int main() {
	int t=0,n=0;
	//t no of test cases
	scanf("%d",&t);
	while(t--){
	    //number to be checked for fibonnaci 
	    scanf("%d",&n);
	    if(fibonacci(n))
	        printf("Yes\n");
	    else
	        printf("No\n");
	}
	return 0;
}