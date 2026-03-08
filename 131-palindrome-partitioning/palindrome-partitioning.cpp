class Solution {
public:
    bool isPalindrome(string &s, int left, int right){
        while(left < right){
            if(s[left] != s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
    void helper(int start,string &s,vector<string> &current,vector<vector<string>> &result){
        if(start == s.size()){
            result.push_back(current);
            return;
        }
         for(int end = start; end < s.size(); end++){

            if(isPalindrome(s, start, end)){

                current.push_back(s.substr(start, end - start + 1));

                helper(end + 1, s, current, result);

                current.pop_back(); // backtrack
            }
        }

    }

    vector<vector<string>> partition(string s) {
        vector<string> current;
        vector<vector<string>> result;
        helper(0,s,current,result);
        return result;
    }
};   

