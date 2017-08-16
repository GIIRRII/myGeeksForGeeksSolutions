#include <stdio.h>
#include <stdlib.h>

int comp(const void* a, const void* b)
{  return *(int*)a > *(int*)b ; }

// A utility function to swap two elements
void swap(int * p, int *q)
{
    int t = *p;
    *p = *q;
    *q = t;
}


int partition(int c[], int l , int h)
{   int j = 0;
    int pivot = c[h]; //pivot
    int i = (l-1);// Index of smaller elements
    
    for (j = 0;j <= h-1; j++ )
    {
        // If current element is smaller than or
        // equal to pivot
        if(c[j] <= pivot){
            i++; //increment index of smaller 
            swap(&c[i], &c[j]);
        }
    }
    swap(&c[i + 1], &c[h]);
    return (i + 1);
} 



/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
   low --> Starting index,
  high --> Ending index */
void quickSort(int c[], int l, int h)
{   
    int pi = 0 ;
    if(l<h)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        pi = partition(c,l,h);
        
        // Separately sort elements before
        // partition and after partition
        quickSort(c, l, pi - 1);
        quickSort(c, pi + 1, h);
          
    }
}


countTraingle(int c[], int n){
    
    int i = 0, j=0, k=0, count=0;
    qsort(c, n, sizeof( c[0] ), comp);
    
    for (i=0;i<n-2;++i)
    {
        k=i+2;
        for(j=i+1;j<n;++j)
        {
            while(k < n && (c[i] + c[j]) > c[k])
                    ++k;
            count += k-j-1;
        }
    }
    return count;
}

int main() {
	int t=0,c[100],i=0,n=0;
	long pc=0,cp=6;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d", &n);
	    for(i=0;i<n;i++)
	       scanf("%d", &c[i]);
	    //quickSort(c,0,n);
	    printf("%d\n",countTraingle(c,n));
	}
	return 0;
}