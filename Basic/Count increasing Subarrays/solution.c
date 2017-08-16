#include<stdio.h>
#include<stdlib.h>

int countIncSubArray(int c[], int n){
    int len = 1;
    int i=1,j=0,count=0;
    for(i=0;i<n-1;i++)
    {   
        if(c[i]<c[i+1])
            len++;
        else
        {
            count += (len*(len-1))/2;
            len = 1;
        } 
    }
    
    if(len>1)
    {
        count+=(len*(len-1))/2;
    }
    
    return  count;// d[i];
}

int main()
{    int t=0,n=0,i=0,c[1000];
     scanf("%d", &t);
     while(t--)
     {
         scanf("%d",&n);
         
         for(i=0;i<n;i++)
            scanf("%d" ,&c[i]);
        
        printf("%d \n" ,countIncSubArray(c,n));
      }
	return 0;
}