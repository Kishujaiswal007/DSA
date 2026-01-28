class Solution {
public:
    bool isFreqSame(vector<int> f1, vector<int> f2){
        for(int i=0;i<26;i++){
            if (f1[i] != f2[i]){
                return false;
            }
        }return true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector <int> f1(26,0);
        for(int i=0;i<p.size();i++){
            f1[p[i]-'a']++;
        } 
        int windowsize=p.size();
        vector<int> ans;
        for(int i=0;i<s.size();i++){
            int winindx=0, indx=i;
            vector<int> f2(26,0);
            while(winindx<windowsize && indx < s.size()){
            f2[s[indx]-'a']++;
            winindx++;
            indx++;
            
            }
         
        if (winindx == windowsize && isFreqSame(f1, f2)) {
            ans.push_back(i);
        }

    } return ans;
    }
};