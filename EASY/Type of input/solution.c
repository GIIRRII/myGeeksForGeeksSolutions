#include<stdio.h>
#include<string.h>

void typeOfInput(char s[], int n){
    int i=0,j=0,flagf=0,flags=0,flagi=0;
    if(n==1 && !isdigit(s[n-1]) )
    {
      printf("char\n");
    }else
    {   while(s[i] != '\0'&&i<n)
        {
        if(isalpha(s[i]))
        //if(s[i]>=65&&s[i]<=90 || s[i]>=97&&s[i]<=122)
            {  flags=1;
               // printf(" string = %c" ,s[i]);
                           }
        else
            if(s[i]=='.')
            {
                flagf = 1;
               // printf(" float = %c", s[i]);
            }
        else
            if(isdigit(s[i]))
            //if(s[i]>=48&&s[i]<=57)
            {  // printf("digit = %c" ,s[i]);
                flagi = 1; }
        i++;
    }
    
    if(flagf == 1 && flagi == 1 && flags!=1)
        printf("float\n");
    else
    if(flagf != 1 && flagi == 1 && flags !=1)
        printf("int\n");
    else
        printf("string\n");
    }
}


int main()
{    int t=0,n=0,i=0;
     char s[100];
     scanf("%d", &t);
     while(t--)
     {
        scanf(" %s ", s);
        n = strlen(s);
        //printf("%s\n", s);
        typeOfInput(s, n);
         
      }
	return 0;
}