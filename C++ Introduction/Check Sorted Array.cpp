//Problem

      /*Given an array arr[], check whether it is sorted in non-decreasing order. Return true if it is sorted otherwise false.
      
      Examples:
      
      Input: arr[] = [10, 20, 30, 40, 50]
      Output: true
      Explanation: The given array is sorted.
      Input: arr[] = [90, 80, 100, 70, 40, 30]
      Output: false
      Explanation: The given array is not sorted.
      Constraints:
      
      1 ≤ arr.size() ≤ 106
      -109 ≤ arr[i] ≤ 109
        */

//Solution

class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        int flag=1;
        int n = arr.size();
        for(int i=0; i<n-1; ++i){
            if(arr[i]>arr[i+1]){
                flag=0;
                break;
            }
        }
        return (flag)?true:false;
    }
};
