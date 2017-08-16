#include <stdio.h>

long lcm( int m, int n)
{
    long lcm =0, a= m , b= n;
    while (a != b ) 
       {   if (a < b)  
                  a= a + m;  
            else  
                   b= b + n ;
       }    
    //lcm = m*n/hcf(m,n);
    //return lcm;
    return a;
}

int hcf(int m , int n)
{ int a=0,b=0, rem=0;
   if(m<n)
   { rem = n%m;
    while(rem!=0)
    {   a=rem;
        rem = m%rem;
        m=a;
    }
    return m;
   }
   else 
    {
    rem = m%n;
    a=0;
    while(rem!=0)
    {   a=rem;
        rem = n%rem;
        n=a;
    }
    return n;
    }
    
    
    
}
int main() {
	int t=0,n=0,m=0,i=0;
	scanf("%d\n",&t);
	while(t--)
	{
	    //input numbers whose HCF and LCM you need to find
	    scanf("%d %d",&m,&n);
	    printf("%ld %d\n",lcm(m,n),hcf(m,n));
	    
	}
	return 0;
}