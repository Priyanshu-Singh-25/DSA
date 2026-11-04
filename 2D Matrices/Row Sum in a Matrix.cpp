//Problem

      /*Given a 2-D integer matrix mat[][]. Return a list of integers where list[i] represents the sum of elements of the ith row of the matrix.
      
      Note: The sum of any row will remain within the range of an integer
      
      Examples:
      
      Input: mat[][] = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
      Output: [6, 15, 24]
      Explanation: Row 1 -> 1+2+3=6, Row 2 -> 4+5+6=15, Row 3 -> 7+8+9=24 
      Input: mat[][] = [[1, 2], [10, 2], [3, 3]]
      Output: [3, 12, 6]
      Explanation: Row 1 -> 1+2=3, Row 2 -> 10+2=12, Row 3 -> 3+3=6 
      Constraints:
      
      1 ≤ mat.size(), mat[i].size() ≤ 103
      0 ≤ mat[i][j] ≤ 106
        */

//Solution

class Solution {
  public:
    vector<int> rowSum(vector<vector<int>>& mat) {
         
         int n = mat.size();
         int m = mat[0].size();
        vector<int>p;
        
        for(int i=0; i<n; ++i){
            int sum=0;
            for(int j=0; j<m; ++j){
                sum=sum+mat[i][j];
            }
            p.push_back(sum);
        }
        return p;
    }
};
