class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int size = nums.size(), sum = 0, total_sum = size * (size +1) / 2;
      for(int i=0;i<size;i++) {
        sum += nums[i];
      }
      return total_sum - sum;
    }
};