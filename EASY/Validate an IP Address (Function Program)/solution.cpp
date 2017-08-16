int isValidDigit(char *ip)
{  
     while(*ip)
     {
         if(*ip >='0' && *ip<='9')
            ++ip;
        else
            return 0;
            
     }
     return 1;
}
/* The function returns 1 if 
IP string is valid else return 0 
You are required to complete this method */
int isValid(char *ip)
{
    int dot=0, num=0,i=0;
    char *ptr;
    if(ip==NULL)
        return 0;
    
    ptr = strtok(ip,"." ) ;
    
    if(ptr == NULL)
        return 0;
    while(ptr)
    {
        if(!isValidDigit(ptr))
            return 0;    
        num = atoi(ptr);
         if(num>=0 && num <255 )
         {
             ptr = strtok(NULL,".");
             if(ptr!=NULL)
                dot++;
         }
         else
            return 0;
    }
    if(dot==3)
     return 1;
    else
        return 0; 
     
    
}