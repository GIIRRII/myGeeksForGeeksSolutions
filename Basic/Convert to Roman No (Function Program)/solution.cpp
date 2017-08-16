/*you are required to complete 
this function*/
void convertToRoman(int n) 
{
    char ch[1001];
    int i=0,number=0, k=0,j=0;
    //to add m 
    if(n>=1000)
    {
        k= n/1000;
        for(j=0;j<k;j++)
        {
            ch[i++] = 'M';
        }
        n = n%1000;
    }
    
    if(n>=500)
    {
        if(n<900)
        {
            k=n/500;
            for(j=0;j<k;j++)
            {
                ch[i++] = 'D';
            }
            n=n%500;
        }
        
        else
        {
            ch[i++] = 'C';
            ch[i++] = 'M';
            n=n%900;
        }
    }
    if(n>=100)
    {
        if(n<400)
        {
            k=n/100;
            for(j=0;j<k;j++)
            {
                ch[i++] = 'C';
            }
            n=n%100;
        }
        
        else
        {
            ch[i++] = 'C';
            ch[i++] = 'D';
            n=n%400;
        }
    }
    if(n>=50)
    {
        if(n<90)
        {
            k=n/50;
            for(j=0;j<k;j++)
            {
                ch[i++] = 'L';
            }
            n=n%50;
        }
        
        else
        {
            ch[i++] = 'X';
            ch[i++] = 'C';
            n=n%90;
        }
    }
    if(n>=10)
    {
        if(n<40)
        {
            k=n/10;
            for(j=0;j<k;j++)
            {
                ch[i++] = 'X';
            }
            n=n%10;
        }
        
        else
        {
            ch[i++] = 'X';
            ch[i++] = 'L';
            n=n%40;
        }
    }
    if(n>=5)
    {
        if(n<9)
        {
            k=n/5;
            for(j=0;j<k;j++)
            {
                ch[i++] = 'V';
            }
            n=n%5;
        }
        
        else
        {
            ch[i++] = 'I';
            ch[i++] = 'X';
            n=n%9;
        }
    }if(n>=1)
    {
        if(n<4)
        {
            k=n/1;
            for(j=0;j<k;j++)
            {
                ch[i++] = 'I';
            }
            n=n%1;
        }
        
        else
        {
            ch[i++] = 'I';
            ch[i++] = 'V';
            n=n%4;
        }
    }
    
    for (int j = 0; j < i; j++)
        cout<<ch[j];
        

    
}