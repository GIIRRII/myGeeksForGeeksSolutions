#include <stdio.h>

enum {false, true};

int sort(int c[], int n)
{   int gap = 0;
    int i=0, temp=0,j=0;
    // Start with a big gap, then reduce the gap
    for(gap = n/2;gap>0;gap/=2)
    {
        // Do a gapped insertion sort for this gap size.
       // The first gap elements a[0..gap-1] are already in gapped order
      // keep adding one more element until the entire array is
     // gap sorted 
        for(i=gap;i<n;i++)
        {  
         // add a[i] to the elements that have been gap sorted
        // save a[i] in temp and make a hole at position i
        temp = c[i];
        // shift earlier gap-sorted elements up until the correct 
       // location for a[i] is found
        for(j=i;(j >= gap && c[j-gap] > temp);j -= gap)
            c[j] = c[j-gap];
          
         //  put temp (the original a[i]) in its correct location    
         c[j] = temp;
        }
}
  return 1;
}

void print(int c[], int n)
{   int i = 0;
    for(i=0;i<n;i++)
     printf("%d ",c[i]);
     
    printf("\n");
}

int main() {
	int c[1000],t=0,n=0,i=0;
    //input no of test cases
    scanf("%d",&t);
    while(t--)
    {
        //input aray size
        scanf("%d\n",&n);
        for(i=0;i<n;i++)
        {   //input character array element
            scanf("%d",&c[i]);
        }
        sort(c,n);
        print(c,n);
    }

	return 0;
}