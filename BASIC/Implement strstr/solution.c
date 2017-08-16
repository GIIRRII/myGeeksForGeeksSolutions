/* The function should return position where the target string 
   matches the string str
Your are required to complete this method */
int strstr(string s, string x)
{
    int m=0, n=0,flag=-1 ,i=0,j=0;
    m=s.length(); n=x.length();
    for(i=0;i<m-n;i++)
    {
        for(j=0;j<n;j++)
            if(s[i+j]!=x[j])
                break;
        
        if(j==n)
        {    flag = i;
            break;
        }    
    }
     return flag;
}