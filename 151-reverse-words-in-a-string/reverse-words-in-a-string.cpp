class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> words;
        string word;

        // Extract words (automatically ignores extra spaces)
        while (ss >> word) {
            words.push_back(word);
        }

        // Reverse words
        reverse(words.begin(), words.end());

        // Build result
        string result;
        for (int i = 0; i < words.size(); i++) {
            result += words[i];
            if (i != words.size() - 1)
                result += " ";
        }

        return result;
    }
};
