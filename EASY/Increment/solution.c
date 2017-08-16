#include <stdio.h>
//enum{ A='10', B='11', C='12', D='13', E='14', F='15' };

void increment(int d, int n){
    int i=0,m=d,c[5];
    i=d%10;
    if(i<n-1)
    {
        d++;
        printf("%d", d);
    //    return 0;
    }
    else
    {
        increment((d/10),n);
        printf("0");
    //    return 0;
    }
    /*while(m/10)
    {
        d = d-i;
        d = d+10;
    }*/
        
}
  
  int incrementChar(char d[], int n,int i){
      if(d[i]=='9')
            d[i]='A';
        else    
      switch(n){
          case 11: if ((d[i] < 'A' )&& i >= 0)
                    {    d[i]++; break; }
                    else
                    if(i>=0)
                    {
                        d[i] = 0;
                        incrementChar(d,n,--i);
                        //printf("%c",d[i]);
                        
                        break;
                    }else
                    {    printf("1");
                    return -1;
                        break;
                    }
                    
                        
          case 12:  if ((d[i] < 'B' )&& i >= 0)
                      {  d[i]++; 
                        break;
                      }
                    else
                    if(i >= 0)
                    {
                        d[i] = '0';
                        incrementChar(d,n,--i);
                       // printf("%c",d[i]);
                       // return 0;
                        break;
                    }else
                    {    printf("1");
                    return -1;
                        break;
                    }
          case 13:  if ((d[i] < 'C' )&& i >= 0)
                      {  d[i]++; 
                        break;
                      }
                    else
                    if(i>=0)
                    {
                        d[i] = '0';
                        incrementChar(d,n,--i);
                        //printf("%c",d[i]);
                        
                        break;
                    }else
                    {    printf("1");
                    return -1;
                        break;
                    }
          case 14:  if ((d[i] < 'D' )&& i >= 0)
                      {  d[i]++ ;  
                        break; 
                      }
                     else
                    if(i>=0)
                    {
                        d[i] = '0';
                        incrementChar(d,n,--i);
                        //printf("%c",d[i]);
                        
                        break;
                    }else
                    {    printf("1");
                    return -1;
                        break;
                    }
          case 15:  if ((d[i] < 'E' )&& i >= 0)
                      {  d[i]++;
                        break;
                      }
                    else
                    if(i>=0)
                    {
                        d[i] = '0';
                        incrementChar(d,n,--i);
                        //printf("%c",d[i]);
                        break;
                    }else
                    {    printf("1");
                         return -1;
                        break;
                    }
                        
          case 16:  if ((d[i] < 'F' )&& i >= 0)
                    {    d[i]++;
                         break;
                    }
                    else
                    if(i >= 0 )
                    {
                        d[i] = '0';
                        incrementChar(d,n,--i);
                        //printf("%c",d[i]);
                        break;
                    } else
                    {   printf("1");
                        return -1;
                        break;
                    }
      
          
      }
        
  }
  
  

int main() {
    int t = 0, i = 0, n = 0 ,d=0;
    char c[5];
	scanf("%d",&t);
	while(t--)
	{   i=0;
	    scanf( "%d" , &n);
	    if(n>10)
	    {
	        scanf( " %s " , c);
	        if(incrementChar(c,n,3) == -1)
	        {
	            printf("0000\n");
	        }else
	        {   while(c[i] =='0')
	                i++;
	            printf("%s\n",c+i);
	        }
	        
	    }else
	    {   scanf("%d",&d);
	        //d++;
	      increment(d,n);
	      printf("\n");
	     }
	   
	}
	return 0;
}