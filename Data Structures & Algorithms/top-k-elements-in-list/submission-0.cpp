class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        vector<vector<int>> bucket(nums.size() + 1); 
        vector<int> answer;
        for (int n : nums){
            freq[n]++;
        }
        for (auto pair : freq){
            bucket[pair.second].push_back(pair.first);
        }
        for (int i = bucket.size() - 1; i >= 0; i--){
            for (int n : bucket[i]){
                answer.push_back(n);
                if(answer.size() == k){
                    return answer;
                }
            }
        }
        return answer;
    }
};
