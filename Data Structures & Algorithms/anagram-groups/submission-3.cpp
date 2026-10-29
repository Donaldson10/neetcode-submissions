class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> group;

        for (auto& word : strs){
           string key = word;
           sort(key.begin(), key.end());
           group[key].push_back(word);
        }

        vector<vector<string>> answer;

        for(auto& word : group){
            answer.push_back(word.second);
        }
        return answer;
    }
};
