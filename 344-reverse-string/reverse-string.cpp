class Solution {
public:
    void reverseString(vector<char>& c)
    {
        int s = c.size()-1;
        for(int i = 0; i<=s*0.5; i++)
            swap(c[i], c[s-i]);
        
    }
};