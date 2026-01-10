class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        int row=image.size();
        int col=image[0].size();
        for(int i=0;i<row;i++){
             int left=0;
                int right = image[0].size()-1;
                while(right>left){
                    swap(image[i][left],image[i][right]);
                    left++;
                    right--;
                }
            
            for(int j=0;j<col;j++){
               
                image[i][j] = 1-image[i][j];
            }
        } return image;
    }
};