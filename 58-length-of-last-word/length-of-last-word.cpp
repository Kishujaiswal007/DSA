class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=0;
        string ans="";
        while(i<s.size()){
        string word="";
        while(i<s.size() && s[i]==' '){
            i++;
        }
        while(i<s.size() && s[i]!=' '){
            word +=s[i];
            i++;
        } if (!word.empty())
                ans = word;
        } return ans.size();
    }
};