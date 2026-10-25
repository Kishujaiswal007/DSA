class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> temp;
        for(int i=0;i<heights.size();i++){
            temp.push_back(heights[i]);
        }
        sort(heights.begin(),heights.end());
        int count=0;
        for(int k=0;k<heights.size();k++){
            if(temp[k]!=heights[k]) count++;
        }
        return count;
    }
};