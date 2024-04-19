/*
Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

Example 1:

Input: s = "hello"
Output: "holle"
Example 2:

Input: s = "leetcode"
Output: "leotcede"
 

Constraints:

1 <= s.length <= 3 * 105
s consist of printable ASCII characters.
*/


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
