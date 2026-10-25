class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxi=-1;
        vector<int> ans(arr.size());
        for(int i=arr.size()-1;i>=0;i--){
            ans[i]=maxi;
            maxi=max(arr[i],maxi);
        }
        return ans;
    }
};