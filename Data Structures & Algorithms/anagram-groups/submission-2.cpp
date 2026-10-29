class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answer; 
        unordered_map<string, vector<string>> bucket; 
        for (string& s : strs){
            string temp = s;
            sort(temp.begin(), temp.end());
            bucket[temp].push_back(s);
        }
        
        for(auto& pair: bucket){
            answer.push_back(pair.second);
        }
        
        return answer; 
    }
};
