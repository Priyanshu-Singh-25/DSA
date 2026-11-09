//Problem

      /*Given a matrix mat[][], count the number of rows that are sorted either in strictly increasing order or strictly decreasing order.
      
      Examples:
      
      Input: mat[][] = [[1, 2, 3], [6, 5, 4], [7, 9, 8]]
      Output: 2
      Explanation: The first row is sorted in strictly increasing order while the second row is sorted in strictly decreasing order.
      Input: mat[][] = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
      Output: 3
      Explanation: All the rows are sorted in strictly increasing order.
      Constraints:
      1 ≤ n, m, mat[i][j] ≤ 103
      */

//Solution

class Solution {
  public:
    int sortedCount(vector<vector<int>> &mat) {
        int n = mat.size();
                int m = mat[0].size();
                int count = 0;

                for (int i = 0; i < n; i++) {
                    if (m == 1) {
                        count++;
                        continue;
                    }

                    bool isInc = true;
                    bool isDec = true;

                    for (int j = 0; j < m - 1; j++) {
                        if (mat[i][j] >= mat[i][j + 1]) {
                            isInc = false;
                        }
                        if (mat[i][j] <= mat[i][j + 1]) {
                            isDec = false;
                        }
                    }

                    if (isInc || isDec) {
                        count++;
                    }
                }

                return count;
    }
};
