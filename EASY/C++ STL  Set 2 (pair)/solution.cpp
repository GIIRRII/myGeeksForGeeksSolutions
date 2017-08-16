/* Inserts a pair  <string,   pair<x, y> > >    into the vector A */
void add_pair(vector<pair<string,pair<int,int> > > &A, string str, int x, int y)
{
     A.push_back(make_pair(str, make_pair(x,y)));
}

/* Returns the size of the vector A */
int get_size(vector<pair<string,pair<int,int> > > &A)
{
    return A.size();
     
}

/* Prints space separated values of vector A */
void print_values(vector<pair<string,pair<int,int> > > &A)
{
     for (int i=0;i<A.size(); i++)
        cout<<A[i].first<<" "<<A[i].second.first
        <<" "<<A[i].second.second<<" ";
}

/* Sorts the vector A based on value x and y*/
int cmp(pair<string , pair<int, int>> a,pair<string , pair<int, int>> b )
{
    if(a.second.first<b.second.first)
        return 1;
    if((a.second.first==b.second.first) 
          && (a.second.second<b.second.second))
             return 1;
    else
    return 0;
    
}
void sort_pair(vector<pair<string,pair<int,int> > > &A)
{
     sort(A.begin(), A.end(), cmp);
}

