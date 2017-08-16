#include <stdio.h>
void reverse(int a[], int n)
{  int i=0,j=0,temp;
   for(i=0,j=n-1;i<=j;i++,j--)
   {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
   }
   
    
}
int main() {
		int c[100],t=0,k=0,n=0,i=0;
//input no of test cases
scanf("%d",&t);
    while(t--)
    {
        //input size of array
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {   //input array element one by one
        scanf("%d",&c[i]);
        
    }
    reverse(c,n);
    
    for(i=0;i<n;i++)
    {   //input array element one by one
        printf("%d ",c[i]);
        
    }
    
    printf("\n");
    }
	return 0;
}