#include <stdio.h>

int largest(int arr[],int n,int j)
{   int max = arr[j],i=0,k=0;
    for( i=j;i<(n-1);i++)
    {
        if(max < arr[i+1])
        { 
            max = arr[i+1]; 
            k = i+1;
            
        }
        
          
        
    }
    arr[k]= arr[j];
    arr[j]  = max;
    
    return arr[j];
}

int main() {
    // Note that size of C[] is considered 1000 according to
    // the constraints mentioned in problem statement.
    int c[1000],t=0,n=0,k=0,i=0; 
    //input the number of test cases you wanted to run 
    scanf("%d",&t);
    //One by one run for all input test case 
    while(t--)
    {
      //Input the size of array
       scanf("%d",&n);
      //input the no of largest elements to be returned
       scanf("%d",&k);
      //input array elements
       for(i=0;i<n;i++)
       {
           scanf("%d",&c[i]);
       }
       //to get largest element
       for(i=0;i<k;i++)
       {
           printf("%d ",largest(c,n,i));
       }
       printf("\n");
                
    }
	//code
	return 0;
}