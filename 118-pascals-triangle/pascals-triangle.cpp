class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       int n=numRows;
        vector<vector<int>>arr(n);
        int i;
    for (int line = 0; line < n; line++)
    { 
        arr[line].resize(line+1);
        for ( i = 0; i <= line; i++)
        {
 
        if (line == i || i == 0)
            arr[line][i] = 1;
        else
            arr[line][i] = arr[line - 1][i - 1] +
                            arr[line - 1][i];
        
        }
          
    }
    return arr;
    }
};