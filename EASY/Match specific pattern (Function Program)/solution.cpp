//string encodeString(string str);

string encodeString(string str)
{
    unordered_map<char, int> map;
    string res = "";
    int i = 0;
 
    // for each character in given string
    for (char ch : str)
    {
        // If the character is occurring for the first
        // time, assign next unique number to that char
        if (map.find(ch) == map.end())
            map[ch] = i++;
 
        // append the number associated with current
        // character into the output string
        res += to_string(map[ch]);
    }
 
    return res;
}
/* The function returns a  vector of strings 
present in the dictionary which matches
the string pattern.
You are required to complete this method */
vector<string> findMatchedWords(vector<string> dict,
                      string pattern)
{     
         vector <string> match;
         int len = pattern.length();
         int size_d =  dict.size();
         string str = encodeString(pattern);
         for(int i=0, j=0; i<size_d; i++)
            {  
                if((str == encodeString(dict[i]) )&& 
                    (len == dict[i].length()))
                  {  
                  //  cout<<dict[i]<<endl;
                    match.push_back(dict[i]);
                   // cout<< match[j-1]<<endl;
                  }
                  
            }
     return match;
}


