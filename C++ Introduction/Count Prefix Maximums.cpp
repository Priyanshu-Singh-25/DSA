//Problem

      /*Given an array arr of integers, find the number of elements such that all the elements before them are smaller. The first element is always counted since there are no elements before it.
      
      Examples:
      
      Input: arr = [10, 40, 23, 35, 50, 7]
      Output: 3
      Explanation: The elements 10, 40, and 50 are such that all preceding elements are smaller. Thus, the count is 3.
      Input: arr = [5, 4, 1]
      Output: 1
      Explanation: Only the first element 5 is such that all preceding elements (none in this case) are smaller. Thus, the count is 1.
      Constraints:
      
      1 ≤ arr.size() ≤ 106
      1 ≤ arr[i] ≤ 109
      
      */

//Solution

class Solution {
  public:
    int countElements(vector<int>& arr) {
        
        int count = 1;
        int max = arr[0];
        for(int i=1; i<arr.size(); ++i){
            if(arr[i]>max){
                count++;
                max = arr[i];
            }
        }
        return count;
    }
};
