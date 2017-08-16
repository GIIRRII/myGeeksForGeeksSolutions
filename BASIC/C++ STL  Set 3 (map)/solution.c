/* Adds a value with key x and value y to the map*/
void add_value(map<int,int> &m,int x,int y)
{
    //m.insert_or_assing(make_pair(x,y));
    m[x]=y; 
}

/* Returns the value of the key
 x if present else returns -1 */
int find_value(map<int,int> &m,int x)
{
  if(m.find(x)!= m.end())
    return m[x];
  else
  return -1;
}

/* Prints contents of the map ie keys and values*/
void print_contents(map<int,int> &m)
{
   for (auto i=m.begin(); i!=m.end();i++)
        cout<<(*i).first<<" "<<(*i).second<<" ";
}