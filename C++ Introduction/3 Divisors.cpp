//Problem

      /*You are given an integer array queries[], where each element represents a query value n. For every n in the array, determine how many numbers less than or equal to n have exactly 3 divisors.
      
      Examples:
      
      Input: queries[] = [6]
      Output: [1]
      Explanation: There is only one number 4 which has exactly three divisors 1, 2 and 4 and less than equal to 6.
      Input: query[] = [3, 10]
      Output: [0, 2]
      Explanation: For query[0], the answer is 0. For query[1], there are two numbers 4 and 9 having exactly 3 divisors.
      Constraints : 
      1 ≤ q ≤ 103, where q is number of elements in the queries.
      1 ≤ queries[i] ≤ 109 
        */

//Solution

class Solution {
  public:
  
    vector<bool> sieve(int limit){
        vector<bool> isPrime(limit + 1, true);
        isPrime[0]=isPrime[1]=false;
        
        for(int p=2; p*p<=limit; ++p){
            if(isPrime[p]){
                for(int i=p*p; i<=limit; i+=p){
                    isPrime[i]=false;
                }
            }
        }
        return isPrime;
    }
    vector<int> threeDivisors(vector<int>& query) {
        int MAX_LIMIT = 31622;
        vector<bool> isPrime = sieve(MAX_LIMIT);
        vector<int>ans;
        
        for(int n: query){
            int limit = sqrt(n);
            int count = 0;
            
            for(int p=2; p<=limit; p++){
                if(isPrime[p]){
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};
