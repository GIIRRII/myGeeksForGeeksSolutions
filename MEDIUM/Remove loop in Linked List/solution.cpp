/*
The structure of linked list is the following
struct node
{
int data;
node* next;
};*/

/*The function removes the loop
from the linked list if present
You are required to complete this method*/
void removeTheLoop(node *list)
{
     struct node  *slow_p = list, *fast_p = list->next;
  	 while (slow_p && fast_p && fast_p->next )
    {
        if (slow_p == fast_p)
                break;
        slow_p = slow_p->next;
        fast_p  = fast_p->next->next;
    }
    
    if(slow_p == fast_p)
    {
        slow_p = list;
        while(slow_p!=fast_p->next)
        {
            slow_p=slow_p->next;
            fast_p=fast_p->next;
        }
        
        fast_p->next = NULL;
    }
}
