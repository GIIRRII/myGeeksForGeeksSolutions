#include<stdio.h>
int main()
{    int t=0,n=0,i=0;
     char a,b;
     scanf("%d", &t);
     while(t--)
     {
         scanf(" %c%c",&a,&b);
         //printf(" %c %c\n",a,b);
         /*switch(a){
             case 'R':
              switch(b)
              {
                  case 'R':
                  printf("DRAW\n");
                  break;
                  case 'P':
                  printf("B\n");
                  break;
                  case 'S':
                  printf("A\n");
                  break;
              }
             break;
             case 'P':
             switch(b)
              {
                  case 'R':
                  printf("A\n");
                  break;
                  case 'P':
                  printf("DRAW\n");
                  break;
                  case 'S':
                  printf("B\n");
                  break;
              }
             break;
             case 'S':
             switch(b)
              {
                  case 'R':
                  printf("B\n");
                  break;
                  case 'P':
                  printf("A\n");
                  break;
                  case 'S':
                  printf("DRAW\n");
                  break;
              }
             break;
         }*/
         if((a =='R' && b =='P')||(a == 'P' && b == 'S')||(a == 'S' && b == 'R'))
            printf("B\n");
         else if( a == b)
            printf("DRAW\n");
         else
            printf("A\n");
      }
	return 0;
}