class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxi=-1;
        for(int i=arr.size()-1;i>=0;i--){
            int currmax=arr[i];
            arr[i]=maxi;
            if(currmax>maxi){ maxi=currmax;}
        }
        return arr;
    }
};