#include<stdio.h>
void swap(int *xp, int *yp)
{ 
    int temp;
    temp = *yp;
    *yp = *xp;
    *xp = temp;
    
}
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
 
       // Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}


int main()
{    int t=0,n=0,i=0,j=0, m=0, sum = 0 ,lap[100]={0};
     
     scanf("%d", &t);
     
     while(t--)
     {   sum = 0;
         scanf("%d %d",&n,&m);
         for(i=0;i<n;i++)
            scanf("%d",&lap[i]);
        
        bubbleSort(lap, n);
        for(j=0;j<m;j++)
        { sum += lap[j];
         }
         
        if(sum > 0) 
            printf("%d\n", 0 * sum);
        else
           printf("%d\n",-1*sum);
        
      }
     
     	return 0;
}