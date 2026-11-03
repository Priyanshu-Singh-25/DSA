//Problem

      /*Given a square matrix mat[][]. Your task is to calculate the sum of its diagonals.
      
      Note :  When matrix size is odd, there is center value which is counted twice in the diagonal sum.
      
      Examples:
      
      Input: mat[][] = [[1, 0, 1], [0, 1, 0], [1, 0, 1]]
      
      Output: 6
      Input: mat[][] = [[1, 2], [3, 4]]
       
      Output: 10
      Constraints:
      
      1 ≤ mat.size() ≤ 100
      1 ≤ mat[i][j] ≤ 104
      mat[i].size() = mat.size()
      */

//Solution

class Solution {
  public:
    int DiagonalSum(vector<vector<int> >& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        int sum=0;
        
        for(int i=0; i<m; ++i){
            for(int j=0; j<n; ++j){
                if(i==j){
                    sum=sum+matrix[i][j];
                }
                if(i==n-1-j){
                    sum=sum+matrix[i][j];
                }
            }
        }
        return sum;
    }
};
