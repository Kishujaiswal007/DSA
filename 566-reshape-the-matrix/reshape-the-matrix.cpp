class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int rows=mat.size();
        int cols=mat[0].size();
        vector<vector<int>> ans(r, vector<int>(c, 0));
        if(r*c != rows*cols){
           return mat; 
        }
        vector<int> temp;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                temp.push_back(mat[i][j]);
            }
        }
        int ind=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                ans[i][j]=temp[ind];
                ind++;
            }
        } return ans;
    }
};