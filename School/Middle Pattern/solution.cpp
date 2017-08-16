/*method prints the given pattern in a single line */
void printPattern(string s)
{   string str;
    int j=0, len = s.length();
  int mid = (len+1)/2;
   for(int i = mid-1;i<len;i++ , j++)
   {    str.push_back(s[i]); 
       for(int k=0; (k<len*2-j*2-2);k++)
            cout<<" ";
        cout<<str<<"$";
   }
   
   for(int i = 0;i<mid-1;i++, j++ )
   {    str.push_back(s[i]); 
       for(int k=0; (k<(len*2)-(j*2)-2);k++)
            cout<<" ";
        cout<<str<<"$";
   }
}
