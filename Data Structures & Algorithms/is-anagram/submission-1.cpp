class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> wordF;
        unordered_map<char, int> wordS;

        for(int i = 0; i < s.length(); i++){
            wordF[s[i]]++;
        }
        for(int i = 0; i < t.length(); i++){
            wordS[t[i]]++;
        }
        if (wordF == wordS) return true;
        return false;
    }
};
