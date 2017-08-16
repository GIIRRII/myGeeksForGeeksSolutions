#include<stdio.h>

void subArraySum(int c[], int n, int sum)
{
    int i=0,j=0,current_sum=0;
    
    while(current_sum!=sum &&(i<n&&j<n))
    {  if(j<=i)
        {
        while(current_sum < sum && i<n)
        {
            current_sum +=c[i]; 
            i++;
        }
    
        while(current_sum > sum && j<n)
        {
            current_sum-=c[j];
            j++;
        }
    }
    }
    
    if(current_sum == sum)
    {
        printf("%d %d\n",j+1,i);
    }else
        printf("-1\n");

}
int main()
{    int t=0,n=0,i=0,c[100],sum=0;
     scanf("%d", &t);
     while(t--)
     {
         scanf(" %d  %d",&n,&sum);
        // printf("%d %d\n",n,sum);
         for(i=0;i<n;i++)
         {
             scanf("%d",&c[i]);
         }
         
         subArraySum(c,n,sum);
      }
	return 0;
}