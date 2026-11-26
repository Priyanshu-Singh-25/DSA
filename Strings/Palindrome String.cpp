//Problem

      /*Given a string s, find if it is a palindrome. A string is considered a palindrome if it reads the same forwards and backwards.
      
      Examples :
      
      Input: s = "abba"
      Output: true
      Explanation: "abba" reads the same forwards and backwards, so it is a palindrome.
      Input: s = "abc" 
      Output: false
      Explanation: "abc" does not read the same forwards and backwards, so it is not a palindrome.
      Constraints:
      
      1 ≤ s.size() ≤ 106
      s consists only of lowercase English alphabets
      */

//Solution

class Solution {
  public:
    bool isPalindrome(string& s) {
        int n = s.length();
        for(int i=0; i<n/2; ++i){
            if(s[i]!=s[n-i-1]){
                return false;
            }
        }
        return true;
    }
};
