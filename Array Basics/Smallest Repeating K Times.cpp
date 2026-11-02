//Problem

      /*Given an array arr, the goal is to find out the smallest number that is repeated exactly ‘k’ times.
      
      Note: If there is no such element then return -1.
      
      Example:
      
      Input: arr[] = [2, 2, 1, 3, 1], k = 2
      Output: 1
      Explanation: 2 and 1 both appear exactly 2 times. Since we need to find the smallest, output is 1.
      Input: arr[] = [3, 5, 3, 2], k = 1
      Output:  2 
      Explanation: 5 and 2 each appear exactly 1 time. Since we need the smallest, the output is 2.
      Constraints:
      
      1 ≤ arr.size() ≤ 106
      1 ≤ arr[i] ≤ 104
        */

//Solution

class Solution {
  public:
    int findDuplicate(vector<int>& arr, int k) {
        int n = arr.size();
        if (n == 0) return -1;
        sort(arr.begin(),arr.end());
        int c = 1;
        for(int i=0; i<n-1; ++i){
            if(arr[i]==arr[i+1]){
                c++;
            }else{
                 if(c==k){
                    return arr[i];
                }
                c=1;
            }
        }
        if(c==k){
            return arr[n-1];
        }
       return -1;
    }
};
