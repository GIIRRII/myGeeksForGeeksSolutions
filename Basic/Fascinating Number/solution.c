#include <stdio.h>
long concatenate(int x, int y) {
    long pow = 10;
    while(y >= pow)
        pow *= 10;
    return x * pow + y;        
}

int fascinating(int n){
    int count [10] = {0},mod=0,i=0;
    long a = 0,b=0,c=0;
    a = n*2; b= n*3;
    c = concatenate(a,b);
    c = concatenate(n,c);
    
    while (c>0)
    {   
        if(c%10!= 0 && count[c%10]<1)
            count[c%10]++;
        else if(count[c%10]>1)
                return 0;
        c = c/10;
        
    }
    
    for(i=1;i<10;i++)
    {
        if(count[i]==0)
        return 0;
    }
    
    return 1;
}

int main() {
	int t=0,n=0;
	scanf("%d" ,&t);
	while(t--)
	{
	    scanf("%d",&n);
	    if(n<100)
	        printf("Number should be atleast three digits\n");
	    else
	        if(fascinating(n))
	            printf("Fascinating\n");
	        else
	            printf("Not Fascinating\n");
	    
	    
	}
	return 0;
}