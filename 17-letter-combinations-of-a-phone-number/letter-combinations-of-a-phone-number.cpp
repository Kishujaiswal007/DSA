class Solution {
public:
    
    void helper(string digits, int index, string current,
                vector<string>& result,
                unordered_map<char, string>& mp) {
        
        // Base case
        if(index == digits.size()) {
            result.push_back(current);
            return;
        }
        
        // Get letters for current digit
        string letters = mp[digits[index]];
        
        for(char ch : letters) {
            helper(digits, index + 1, current + ch, result, mp);
        }
    }
    
    vector<string> letterCombinations(string digits) {
        
        if(digits.empty())
            return {};
        
        unordered_map<char, string> mp = {
            {'2',"abc"}, {'3',"def"}, {'4',"ghi"},
            {'5',"jkl"}, {'6',"mno"}, {'7',"pqrs"},
            {'8',"tuv"}, {'9',"wxyz"}
        };
        
        vector<string> result;
        
        helper(digits, 0, "", result, mp);
        
        return result;
    }
};