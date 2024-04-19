class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        int i = 0;
        while(i<s.size())
        {
            if(s[i] != t[i])
                return (char) t[i];

            i++;
        }

        return (char) t[t.size()-1];
    }
};