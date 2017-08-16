/*The method multiplies 
two  linked lists l1 and l2
and returns their product*/

/*You are required to complete this method*/
long long  multiplyTwoLists (node* l1, node* l2)
{ long long sum1=0, sum2=0, product=0;
  while(l1!=NULL)
  {
      sum1 = sum1*10 + l1->data;
      sum1 = sum1%1000000007; 
      l1 = l1->next;
  }
  while(l2!=NULL)
  {
      sum2 = sum2*10 + l2->data;
      sum2=sum2%1000000007;
      l2 = l2->next;
  }
  
  return ((sum1*sum2)%1000000007);
  
}