class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> pool(nums.begin(), nums.end());
        int highest = 0;

        for (auto& n : pool){
            if (pool.contains(n - 1)) continue;
            
            int count = 1;
            while(pool.contains(n + count)){
                count++;
            }
            highest = max(count, highest);
        }
        return highest;



    }
};
