class Solution {
public:
    void helper(int index, string digits,string current,vector<string> & result,unordered_map<char,string> &mp){
        if(index==digits.size()){ 
            result.push_back(current);
            return;
        }
        string letters = mp[digits[index]];
        for(char ch: letters){
            helper(index+1,digits,current+ch,result,mp);
        }

    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty())
            return {};
        unordered_map<char,string> mp;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        vector<string> result;
        helper(0,digits,"",result,mp);
        return result;
    }
};