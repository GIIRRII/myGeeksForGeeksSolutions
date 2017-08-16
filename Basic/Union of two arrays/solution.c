#include <stdio.h>
#include <stdlib.h>
unionArray(int c[], int d[], int n, int m){
    int i=0,j=0,k=0;
    int *arr = (int*)malloc(sizeof(int)*(n+m));
    for(i=0,j=0,k=0;i<n&&j<m;)
    {
        if(c[i] == c[i+1])
        {
            i++;
        }
        if(d[j] == d[j+1])
        { j++;
            
        }
        else
        if(c[i]<d[j])
        {
            arr[k++] = c[i++];
            
        }else
        if(c[i]>d[j])
        {
            arr[k++] = d[j++];
            
        }else if(c[i] == d[j]){
             arr[k++] = c[i++];
             j++;
         }
    }
    
    while(i<n)
    {
        arr[k++] = c[i++];
    }
    while(j<m)
        arr[k++] = d[j++];
    
    
    for(i=0;i<k;i++)
    {
        printf("%d ",*(arr + i));
    }
    
}

void shellSort(int c[],  int n)
{ int gap=0, temp=0,i=0,j=0;
    for(gap = n/2; gap>0; gap/=2)
    {
        for(i=gap; i<n; i++)
        {
            temp = c[i];
            for( j=i; j>=gap && c[j-gap]>temp; j -= gap)
                c[j] = c[j-gap];
            
            c[j] = temp;
        }
      /*  printf("For gap = %d \n ", gap );
        for(i=0;i<n;i++)
            printf("%d ", c[i]);
        
        printf("\n");*/
    }
    
}

void swap(int *xp, int *yp){
    int zp = *yp;
    *yp = *xp;
    *xp = zp;
}

int partision(int c[], int low, int high)
{
    int pivot=c[high], i=low-1, j=0;
    
    for(j=0;j<high;j++)
    {
        if(pivot>=c[j])
        {
            i++;
            swap(&c[i],&c[j]);
        }
    }
    swap(&c[i+1], &c[high]);
    return (i+1);
    
}

void quickSort(int c[], int low, int high){
    int pi=0;
    if(low<high){
        pi = partision(c,low,high);
        quickSort(c,low,pi-1);
        quickSort(c,pi+1,high);
    }
}
int main() {
	int t=0,n=0,m=0,i=0,j=0,c[1000],d[1000];
	scanf("%d",&t);
	while(t--){
	    scanf(" %d %d", &n, &m);
	    for(i=0;i<n;i++)
	        scanf("%d",&c[i]);
	    for(j=0;j<m;j++)
	        scanf("%d" , &d[j]);
	    
	    shellSort(c,n);
	    /*for(i=0;i<n;i++)
	        printf("%d ",c[i]);
	    printf("\n");*/
	    
	    quickSort(d,0,m-1);
	  /*  for(j=0;j<m;j++)
	        printf("%d " , d[j]);
	    printf("\n");*/
	    
	    unionArray(c,d,n,m);
	    printf("\n");
	}
	return 0;
}