class Solution {
public:
    string reverseVowels(string s) 
    {
        string word = s;
        int st = 0;
        int e = s.length()-1;
        string vowel = "AEIOUaeiou";

        while(st<e)
        {
            while(st<e && vowel.find(word[st]) == string::npos)
                st++;

            while(st<e &&  vowel.find(word[e]) == string::npos)
                e--;

            swap(word[st], word[e]);

            st++;
            e--;
        }

        return word;
    }
};