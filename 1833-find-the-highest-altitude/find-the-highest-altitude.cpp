class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> ans(n + 1); 
        ans[0]=0;
        int maxi=0;
        for(int i=0;i<gain.size();i++){
            ans[i+1]=gain[i]+ans[i];
            maxi=max(ans[i+1],maxi);
        }
        return maxi;
    }
};