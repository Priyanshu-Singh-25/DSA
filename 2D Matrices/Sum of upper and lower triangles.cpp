//Problem

      /*Given a square matrix mat[][], return an array of two elements containing two values: the sum of Upper Triangle elements and the sum of Lower Triangle elements. Upper Triangle consists of elements on the diagonal and above it. The lower triangle consists of elements on the diagonal and below it. 
      
      Examples:
      
      Input: mat[][] = [[6, 5, 4], [1, 2, 5], [7, 9, 7]]
      Output: [29, 32]
      Explanation:
      Upper triangular matrix:
      6 5 4
        2 5
          7
      Sum of these elements is 6 + 5 + 4 + 2 + 5 + 7 = 29.
      Lower triangular matrix:
      6
      1 2
      7 9 7
      Sum of these elements is 6 + 1 + 2 + 7 + 9 + 7 = 32.
      Input: mat[][] = [[1, 2], [3, 4]]
      Output: [7, 8]
      Explanation: 
      Upper triangular matrix:
      1 2
        4
      Sum of these elements are 1 + 2 + 4 = 7.
      Lower triangular matrix:
      1
      3 4
      Sum of these elements are 1 + 3 + 4 = 8.
      Constraints: 
      1 ≤ n ≤ 500
      1 ≤ mat[i][j] ≤ 1000
      
      Constraints:
      
      1 ≤ mat.size() ≤ 500
      1 ≤ mat[i][j] ≤ 103
      mat[i].size() = mat.size()
      */

//Solution

class Solution {
  public:
    vector<int> sumTriangles(vector<vector<int>>& mat) {
       int n = mat.size();
       int upperSum = 0;
       int lowerSum = 0;
       
       for(int i=0; i<n; ++i){
           for(int j=0; j<n; ++j){
               if(j>=i){
                   upperSum += mat[i][j];
               }
               if(j<=i){
                   lowerSum += mat[i][j];
               }
           }
       }
       return {upperSum, lowerSum};
    }
};
