class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string temp=strs[0];
        for(int i=1;i<strs.size();i++){
             string ans="";
            for(int j=0;j < temp.size() && j < strs[i].size();j++){
                if(strs[i][j] == temp[j]){
                    ans=ans+strs[i][j];
                } else{
                    break;
                }
            }temp=ans;
            if(temp.empty()){
                return "";
            }
        }return temp;
    }
};