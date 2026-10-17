//Problem

      /*Given an array arr[] of positive integers. Find out the maximum perimeter of the triangle from the array.
      
      Examples:
      
      Input: arr[] = [6, 1, 6, 5, 8, 4]
      Output: 20
      Explanation: Triangle formed by  8,6 & 6. Thus perimeter 20.
      Input: arr[] = [7, 55, 20, 1, 4, 33, 12]
      Output:  -1
      Explanation:As the triangle is not possible because the condition: the sum of two sides should be greater than third is not fulfilled here.
      Constraints:
      
      1 ≤ arr.size() ≤ 106
      1 ≤ arr[i] ≤ 105
      */

//Solution

class Solution {
  public:
    int maxPerimeter(vector<int> &arr) {
        sort(arr.rbegin(),arr.rend());
        int n = arr.size();
        for(int i=0; i<n-2; ++i){
            if(arr[i]<arr[i+1]+arr[i+2]){
                int sum =arr[i]+arr[i+1]+arr[i+2];
                return sum;
            }
        }
        return -1;
    }
};
