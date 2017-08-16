#include <stdio.h>

int min(int a, int b, int c)
{
    if(a<=b)
    {
        if(a<=c)
            return a;
        else
            return c;
    } else if(b<=c)
            return b;
        else 
            return c;
}
int uglyNo(int n){
    
    int multiple_of_2 = 2, multiple_of_3 = 3, multiple_of_5 = 5, i = 0, ugly_no = 0;
    int j=0,k=0,l=0;    
    int uglyNo[500];
    
    for(i=1;i<n;i++)
    {
        ugly_no = min(multiple_of_2, multiple_of_3, multiple_of_5);
        uglyNo[i] = ugly_no;    
        //printf("%d ", ugly_no);
        
        if(ugly_no == multiple_of_2)
        {   j = j+1;
            multiple_of_2 = uglyNo[j]*2;
        }
        
        if(ugly_no == multiple_of_3)
        {    k = k+1;
             multiple_of_3 = uglyNo[k]*3;
        }
        
        if(ugly_no == multiple_of_5)
        {    l = l+1;
             multiple_of_5 = uglyNo[l] * 5;
        }
        
    }
    
    return ugly_no;
    //return uglyNo[n-1];
    
}

int main() {
    int t=0,n=0;
    scanf("%d" , &t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%d\n", uglyNo(n));
    }
	//code
	return 0;
}