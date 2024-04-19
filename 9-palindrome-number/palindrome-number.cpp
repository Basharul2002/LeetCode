class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x<0) return false;


           int t = x;
           long long int rev = 0;
           while(t != 0)
           {
               rev = (rev*10)+(t%10);

               t /= 10;
           }     

           return (rev == x);
    }
};