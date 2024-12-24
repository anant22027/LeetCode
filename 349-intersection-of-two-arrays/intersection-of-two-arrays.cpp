class Solution {
public:
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::set<int> set1(nums1.begin(), nums1.end());
        std::set<int> set2(nums2.begin(), nums2.end());
        std::vector<int> result;

        for (const auto& num : set2) {
            if (set1.count(num)) {
                result.push_back(num);
            }
        }
        return result;
    }
};