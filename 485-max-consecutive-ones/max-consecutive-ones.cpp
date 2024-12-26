class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int MaxConsecutive_1 = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                count++;
            }
            else{
                MaxConsecutive_1 = max(MaxConsecutive_1, count);
                count=0;
            }
        }
        return max(MaxConsecutive_1, count);

    }
};