#include <stdio.h>

int leapYear(int n)
{  int temp = 0;
    if(((n%100 != 0) && (n%4 == 0)) ||((n%100) == 0 && ((n/100)%4 == 0)))
        return 1;
    return 0;
}


int main() {
	int t=0,n=0,i=0;
    //input no of test cases
    scanf("%d",&t);
    while(t--)
    {
        //input no
        scanf("%d",&n);
        if(leapYear(n))
            printf("Yes\n");
        else
            printf("No\n");
    }
	return 0;
}