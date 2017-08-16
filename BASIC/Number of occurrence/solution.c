#include <stdio.h>
int count(int c[], int n, int k)
{ 
  int i= 0; //first occurence of k
  int j=0; //last occurence of k
  i= first(c,0,n,k);
  
  if(i==-1)
  return i;
  
  j= last(c,i,n-1,k);
  
  return j-i+1;
  
    
}

int first(int c[], int l, int h, int k)
{
    if(h>=l)
    { int mid = l+(h-l)/2;
      if((c[mid]==k)&&(mid == 0 || c[mid-1]<k))
        return mid;
        else
      if(c[mid]<k)
        return first(c,(mid+1),h,k);
      else 
        return first(c,l,(mid-1),k);
    }
    return -1;
    
}
int last(int c[], int l, int h, int k)
{
   if(h>=l)
   {
       int mid = l+(h-l)/2;
       if((c[mid]==k)&&(mid == h || c[mid+1]>k))
       return mid;
       else
       if(c[mid]>k)
       return last(c,l,(mid-1),k);
       else 
       return last(c,(mid+1),h,k);
   }
   return -1;
}


int main() {
int c[500],t=0,k=0,n=0,i=0;
//input no of test cases
scanf("%d",&t);
while(t--)
{
    scanf("%d",&n);
    
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
        
    }
    printf("%d\n", count(c,n,k));
}
	return 0;
}