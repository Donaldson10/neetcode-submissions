class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        vector<vector<int>> bucket(nums.size() + 1);
        vector<int> answer;
        for(auto& n : nums){
            freq[n]++;
        }
        for(auto& [num,count] : freq){
            bucket[count].push_back(num);
        }
        for(int i = bucket.size() - 1; i > 0; i--){
            for(auto& b : bucket[i]){
                answer.push_back(b);
                if((int)answer.size() == k) return answer;
            }
        }
        return answer; 
    }
};
