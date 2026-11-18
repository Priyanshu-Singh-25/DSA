//Problem

      /*Given two square matrices mat1[][] and mat2[][]. Multiply these two matrices and return the resulting matrix.
      
      Examples:
      
      Input: mat1[][] = [[1, 1, 1], [1, 1, 1], [1, 1, 1]], mat2[][] = [[1, 1, 1], [1, 1, 1], [1, 1, 1]]
      Output: [[3, 3, 3], [3, 3, 3], [3, 3, 3]]
      Explanation: After multiplying mat1 and mat2 we get the resulting matrix equal to [[3, 3, 3], [3, 3, 3], [3, 3, 3]].
      Input: mat1[][] = [[1, 2], [3, 4]], mat2[][] = [[4, 3], [2, 1]]
      Output: [[8, 5], [20, 13]]
      Explanation: After multiplying mat1 and mat2 we get the resulting matrix equal to [[8, 5], [20, 13]]
      Constraints:
      
      1 ≤ mat1.size(), mat1[i][j], mat2.size(), mat2[i][j] ≤ 100
      mat1[i].size() = mat1.size()
      mat2[i].size() = mat2.size()
      */

//Solution

class Solution {
  public:
    vector<vector<int>> multiply(vector<vector<int>>& mat1, vector<vector<int>>& mat2) {
        int n = mat1.size();
        vector<vector<int>>res(n,vector<int>(n,0));
        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                for(int k=0; k<n; ++k){
                    res[i][j] +=mat1[i][k]*mat2[k][j];
                }
            }
        }
        
        return res;
    }
};
