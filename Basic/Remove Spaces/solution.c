#include<stdio.h>
#include<string.h>
void removeSpace(char c[], int n){
    int i=0, j=0;
   /* for (i=0;i<n&&c[i]!='\0';)
    {
         /* if(c[i] == ' ')
            j=i;
            while(c[i] == ' ')
                i++;
            while(c[i]!= ' ' && c[i]!= '\0')
            {
                c[j] = c[i];
                j++;i++;
            }
           
        
    }*/
    for(i=0;c[i];i++)
    {
        if(c[i]!=' ')
            c[j++] = c[i];
    }
    c[j] = '\0';
}
int main()
{    int t=0,n=0,i=0;
    char c[1000];
     scanf("%d", &t);
     while(t--)
     {
        scanf (" %[^\n]%*c ", c);
        //fgets(c,1000,stdin);
        n = strlen(c);
       // printf("%d",n);
        removeSpace(c,n);
        printf("%s\n",c);
      }
	return 0;
}