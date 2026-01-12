class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       int rows=matrix.size();
       int cols=matrix[0].size();
       for(int i=0;i<rows;i++){
        for(int j=i+1;j<cols;j++){
                swap(matrix[i][j],matrix[j][i]);
        }
       }
       
        for(int k=0;k<rows;k++){
         int left = 0;
         int right = matrix[0].size() - 1;
        while (left < right) {
         swap(matrix[k][left], matrix[k][right]);
         left++;
         right--;}
        } 
    }
};