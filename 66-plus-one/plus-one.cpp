class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
       int num = 0, carry = 0;


       for(int i = digits.size() - 1; i>=0; i--)
       {
            if(digits[i] < 9)
            {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
       }

        digits.insert(digits.begin(), 1);
        digits[0] = 1;

       return digits;
    }
};