// Runtime :20ms, faster than 73.03% submissions
//Memory usage:13.7MB, less than 33.67% of submissions
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int ans = 0;
        map<int, int> m;
        map<int, int>::iterator it;
        for(int i: nums)
            m[i]++;
        if(k==0){
            for(it=m.begin(); it!=m.end(); it++){
                if(it->second >= 2)
                    ans++;
            }
            return ans;
        }
        else{            
            for(it=m.begin(); it!=m.end(); it++){
                if(m.count(k+it->first)){
                    ans++;
                }
            }
        }
        return ans;
    }
};