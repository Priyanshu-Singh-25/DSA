//Problem

      /*Give a square matrix mat[][], return all the elements of its anti-diagonals from top to bottom.
      
      Examples :
      
      Input: mat[][] = [[1, 2], [3, 4]]
      Output: [1, 2, 3, 4]
      Explanation: 
      
      Input: mat[][] = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
      Output: [1, 2, 4, 3, 5, 7, 6, 8, 9]
      Explanation: 
      
      Constraints:
      
      1 ≤ mat.size() ≤ 103
      0 ≤ mat[i][j] ≤ 106
      mat[i].size() = mat.size()
      */

//Solution

class Solution {
  public:
    vector<int> diagView(vector<vector<int>> mat) {
        int n = mat.size();
        vector<int>v;
        for(int col=0; col<n; ++col){
            int r=0,c=col;
            while(r<n && c>=0){
                v.push_back(mat[r][c]);
                r++;
                c--;
            }
        }
        for(int row=1; row<n; ++row){
            int r=row,c=n-1;
            while(r<n && c>=0){
                v.push_back(mat[r][c]);
                r++;
                c--;
            }
        }
        return v;
    }
};
