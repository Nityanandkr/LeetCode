class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int j=0; j<nums.size();j++){
        for (int i=0; i<nums.size();i++){
            if (nums[j]+nums[i]==target && (j != i)){
                return {j,i};
            }
            
        }}
        return{};
    }
};