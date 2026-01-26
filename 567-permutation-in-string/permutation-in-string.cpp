class Solution {
public:
    bool isFreqSame(vector<int> f1, vector<int> f2){
        for(int i=0;i<26;i++){
            if (f1[i] != f2[i]){
                return false;
            }
        }return true;
    }

    bool checkInclusion(string s1, string s2) {
        vector<int> f1(26,0);
        for(int i=0;i<s1.size();i++){
            f1[s1[i]-'a']++;
        }
        int windowsize=s1.size();
        for(int i=0;i<s2.size();i++){
            int windidx=0, idx=i;
            vector<int> f2(26,0);
            while(windidx<windowsize && idx < s2.size()){
                f2[s2[idx]-'a']++;
                windidx++;
                idx++;
            }
            if(isFreqSame(f1,f2)){
                return true;
            }
        } return false;
    }
};