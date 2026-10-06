//Problem

      /*Given a positive integer n, return true if it is a perfect square, otherwise return false. A number is called a perfect square if it can be written in the form a × a, where a is an integer.
      
      Examples:
      
      Input: n = 35
      Output: false 
      Explanation: 35 is not a perfect square.
      Input: n = 49
      Output: true
      Explanation: 49 is a perfect square (7 * 7 = 49).
      Constraints:
      1 ≤ n ≤ 105
      
      */

//Solution

class Solution {
  public:
    long long int isPerfectSquare(long long int n) {
        long long odd = 1;
        while(n>0){
            n=n-odd;
            odd+=2;
        }
        
        return (n==0)?1:0;
    }
};
