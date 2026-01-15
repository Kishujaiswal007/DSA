class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
    int top=0;
    int left=0;
    int bottom=n-1;
    int right=n-1;        
    int index=1;
    vector<vector<int>> Matrix(n, vector<int>(n, 0));
    while(left<=right && top<=bottom){
    for(int i=left;i<=right;i++){
        Matrix[top][i]=index;
        index++;
    } top++;
    for(int i=top;i<=bottom;i++){
        Matrix[i][right]=index;
        index++;
    } right--;
    if (top <= bottom){
    for(int i=right;i>=left;i--){
        Matrix[bottom][i]=index;
        index++;
    } bottom--;}
    if(right>=left){
    for(int i=bottom;i>=top;i--){
        Matrix[i][left]=index;
        index++;
    } left++;}
    } return Matrix;
    }
};