class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> pool(nums.begin(), nums.end());  
        int highest = 0;
    
        for(auto& n : pool){
            
            if (pool.contains(n - 1)){
                continue;
            } 
            int length = 1;
            while (pool.contains(n + length)){
                length++;
            }
            highest = max(highest, length);
        }
        return highest; 
    }
};
