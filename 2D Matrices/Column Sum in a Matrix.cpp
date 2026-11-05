//Problem

      /*Given a 2-D integer matrix mat[][]. Return a list of integers where list[i] represents the sum of elements of the ith column of the matrix.
      
      Examples:
      
      Input: mat[][] = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
      Output: [12, 15, 18]
      Explanation: Column 1 -> 1+4+7=12, Column 2 -> 2+5+8=15, Column 3 -> 3+6+9=18 
      Input: mat[][] = [[1, 2], [10, 2], [3, 3]]
      Output: [14, 7]
      Explanation: Column 1 -> 1+10+3=14, Column 2 -> 2+2+3=7 
      Constraints:
      
      1 ≤ mat.size(), mat[i].size() ≤ 103
      0 ≤ mat[i][j] ≤ 103
      */

//Solution

class Solution {
  public:
    vector<int> colSum(vector<vector<int>>& mat) {
        
        int n = mat.size();
        int m = mat[0].size();
        vector<int>p;
        
        for(int i=0; i<m; ++i){
            int sum=0;
            for(int j=0; j<n; ++j){
                sum+=mat[j][i];
            }
            p.push_back(sum);
        }
        return p;
    }
};
