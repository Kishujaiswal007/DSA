class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged="";
        int ans=0;
        int n=min(word1.size(),word2.size());
        for(int i=0;i<n;i++){
            merged=merged+word1[i];
            merged += word2[i];
        }
        if(word1.size()>word2.size()){
             merged += word1.substr(n);
        }
        else{
            merged += word2.substr(n);
        }
        return merged;
    }
};