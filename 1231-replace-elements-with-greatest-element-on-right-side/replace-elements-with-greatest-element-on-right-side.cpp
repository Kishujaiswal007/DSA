class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> result(arr.size(), -1);
        if(arr.size()==0) return result;
        for(int i=0;i<arr.size()-1;i++){
            int maxArr = arr[i+1];
            for(int j=i+2;j<arr.size();j++){
                maxArr=max(maxArr,arr[j]);
            }
            result[i]= maxArr;
        }
        return result;
    }
};