#include<stdio.h>
#include<string.h>
unsigned int isGoodString(char str [], int len )
{   int i=0,j=0,flag =0;

    for(i=0;i<len-1;i++ )
    {     j = str[i]-str[i+1];
          if(j == 1 || j==-1 || j==25||j==-25 )
           flag = 1;
          else
          return 0;
    }
    return 1;
}

int main()
{    int t=0,n=0, len=0;
     char str [51];
     scanf("%d", &t);
     while(t--)
     {
         scanf("%s",str);
         len = strlen(str);
         if(isGoodString(str,len ))
            printf("YES\n");
        else
            printf("NO\n");
      }
	return 0;
}