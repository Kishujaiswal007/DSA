class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if (p.size() > s.size()) return ans;

        vector<int> f1(26, 0), f2(26, 0);

        for (char c : p)
            f1[c - 'a']++;

        int windowSize = p.size();

        // first window
        for (int i = 0; i < windowSize; i++)
            f2[s[i] - 'a']++;

        if (f1 == f2)
            ans.push_back(0);

        // slide window
        for (int i = windowSize; i < s.size(); i++) {
            f2[s[i] - 'a']++;                  // add right
            f2[s[i - windowSize] - 'a']--;     // remove left

            if (f1 == f2)
                ans.push_back(i - windowSize + 1);
        }

        return ans;
    }
};
