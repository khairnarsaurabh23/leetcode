//Runtime: 76ms, faster than 83.05% of submissions
//Memory usage: 37.3MB, less than 52.49% of submissions

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0, sum=0;
        unordered_map<int, int> m{{0,1}};
        for(int i: nums){
            sum += i;
            int target = sum -k;
            if(m.count(target))
                ans+=m[target];
            ++m[sum];
        }
        return ans;
    }
};
