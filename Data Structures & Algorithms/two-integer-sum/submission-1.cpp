class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> count; 

        for (int i = 0; i < nums.size(); i++){
            int check = target - nums[i];
            if (count.contains(check)){
                return {count.at(check), i};
            }
            count[nums[i]] = i;
        }
        return {};
    }
};
