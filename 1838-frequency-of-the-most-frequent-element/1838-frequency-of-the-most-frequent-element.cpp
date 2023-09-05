class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end()); // Sort the array in ascending order
    int n = nums.size();
    long long sum = 0;
    int left = 0;
    int maxFreq = 0;

    for (int right = 0; right < n; ++right) {
        sum += nums[right];

        while ((long long)nums[right] * (right - left + 1) > sum + k) {
            sum -= nums[left];
            left++;
        }

        maxFreq = max(maxFreq, right - left + 1);
    }

    return maxFreq;
    }
};


