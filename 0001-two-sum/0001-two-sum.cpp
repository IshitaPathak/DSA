class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
 



    vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        // If the target sum is not found, return an empty vector or handle the case as needed
        return result;
        
    }
};
