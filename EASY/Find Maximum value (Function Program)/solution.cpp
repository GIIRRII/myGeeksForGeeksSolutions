/*The function returns an integer
which denotes the max value 
of abs(i – j) * min(arr[i], arr[j]) 
in the array.
*/

/*You are required to complete this method*/
int max_val(int arr[], int n)
{
    int i=0,max_prod=0,cur_max_prod=0,j=n-1,prod[n];
    prod[0] = 0;
    while(i<j)
    { 
        if(arr[i] < arr[j])
         {   cur_max_prod =  abs(i-j)* arr[i];
            i++;
         }
        else
        {
            cur_max_prod =  abs(i-j)*arr[j];
            j--;
        }
    
          if(cur_max_prod > max_prod)
             max_prod = cur_max_prod;
          
    }
    return max_prod;
}