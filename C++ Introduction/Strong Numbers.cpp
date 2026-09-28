//Problem

      /*A Strong Number is a number whose value is equal to the sum of the factorials of its digits.
      
      Given a positive integer n, find if it is a Strong Number.
      
      Examples:
      
      Input: 145
      Output: true
      Explanation: The sum of the factorials of its digits is: 1! + 4! + 5! = 1 + 24 + 120 = 145.
      Since the sum equals the original number, 145 is a Strong Number.
      Input: 5314
      Output: false
      Explanation: The sum of the factorials of its digits is not equal to 5314. Therefore, it is not a Strong Number.
      Constraints:
      
      1 ≤ n ≤ 104
        */

//Solution

class Solution {
  public:
    int isPerfect(int N) {
        int temp=N;
        int sum=0;
        while(temp>0){
            int n=temp%10;
            int factorial=1;
            for(int i=1; i<=n; ++i){
                factorial=factorial*i;
            }
            sum=sum+factorial;
            temp=temp/10;
        }
        return (sum==N)? 1 : 0 ;
    }
};
