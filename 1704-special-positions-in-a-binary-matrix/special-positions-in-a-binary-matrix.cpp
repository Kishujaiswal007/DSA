class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int rows=mat.size();
        int cols=mat[0].size();
        int finalcount=0;
        vector<int> rcount(rows);
        vector<int> ccount(cols);
        for(int i=0;i<rows;i++){
            int count=0;
            for(int j=0;j<cols;j++){
                if (mat[i][j]==1){
                    count++;
                }
                rcount[i]=count;
            }
        }
        for(int i=0;i<cols;i++){
            int count=0;
            for(int j=0;j<rows;j++){
                if (mat[j][i]==1){
                    count++;
                }
                ccount[i]=count;
            }
        }
        for(int i=0;i<rows;i++){
            
            for(int j=0;j<cols;j++){
               if (mat[i][j] == 1 && rcount[i] == 1 && ccount[j] == 1){
                finalcount++;
               }
            }
        } return finalcount;
    }
};