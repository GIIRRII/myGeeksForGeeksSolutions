/*You are required to complete this method*/
int subsequenceCount(string S, string T)
{
  int m = T.length();
  int n = S.length();
  if(m>n)
      return 0;
   int seq[m+1][n+1], i=0,j=0;
/*assign  first column with 0 , 
    since empty S can't have subsequence*/ 
    for(i=1;i<=m;i++)
        seq[i][0] = 0; 

/*assign  first row with 1 , 
    since empty T will be subsequence of every S */
    for(j=0;j<=n;j++)
        seq[0][j] = 1;    
    
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
        {
            if(T[i-1] != S[j-1])
                seq[i][j]= seq[i][j-1];
            else
                seq[i][j] = seq[i][j-1]+seq[i-1][j-1];
        }
    
    return seq[m][n];
}