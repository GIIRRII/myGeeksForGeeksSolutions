#include<stdio.h>
int main()
{    int t=0,n=0,i=0, j=0;
     int arr[100] = {0}, sum[100]={0};
     scanf("%d", &t);
     
     while(t--)
     {
         scanf("%d",&n);
         
         for(i=0;i<n;i++){
            scanf("%d", &arr[i]);
            sum[j] += arr[i];
            }
        printf("%d\n",sum[j]);
         j++;
      }
      
	return 0;
}