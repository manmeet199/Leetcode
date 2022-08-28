class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& matrix) {
         int m = matrix.size(), n = m ? matrix[0].size() : 0;
        for(int k = m-1; k>=0; k--) {
            for(int i=0; i<k; i++) {
                for(int j = 0; j<n-1; j++) {
                    if(matrix[i][j] > matrix[i+1][j+1]) swap(matrix[i][j], matrix[i+1][j+1]);
                }
            }
        }
        return matrix;
    }
};