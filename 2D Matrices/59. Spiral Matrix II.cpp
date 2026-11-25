//Problem

      /*Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.
      
       
      
      Example 1:
      
      
      Input: n = 3
      Output: [[1,2,3],[8,9,4],[7,6,5]]
      Example 2:
      
      Input: n = 1
      Output: [[1]]
       
      
      Constraints:
      
      1 <= n <= 20
        */

//Solution

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n,0));
        int top = 0, bottom = n-1;
        int left = 0, right = n-1;
        int num = 1;
        int target = n*n;

        while(num<=target){
            for(int col = left; col <= right && num <= target; ++col){
                matrix[top][col] = num++;
            }
            ++top;

            for(int row = top; row <= bottom && num <= target; ++row){
                matrix[row][right] = num++;
            }
            --right;

            for (int col = right; col >= left && num <= target; --col) {
                matrix[bottom][col] = num++;
            }
            --bottom;

            for (int row = bottom; row >= top && num <= target; --row) {
                matrix[row][left] = num++;
            }
            ++left;
        }
        return matrix;
    }
};
