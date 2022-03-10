//runtime beats 100% of the online submissions


class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int ans = 0, d = 0;
        for(int i=2; i<nums.size(); i++){
            if(nums[i]-nums[i-1] == nums[i-1]-nums[i-2])
                ans += ++d;
            else
                d = 0;
        }
        return ans;
    }
};