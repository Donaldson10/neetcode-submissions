class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> answer(nums.size(), 1);
    int leftSum = 1; //nums[0];
    int rightSum = 1; //nums[nums.size() - 1];

    for(int i = 0; i < nums.size(); i++){
        answer[i] = leftSum; 
        leftSum *= nums[i];
    }
    for(int i = nums.size() - 1; i >= 0; i--){
    answer[i] = answer[i] * rightSum; 
    rightSum *= nums[i];
    }
    return answer;

    }
};
