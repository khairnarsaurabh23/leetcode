//runtime 28ms, faster than 51.20% submissions
//
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> m;
        map<int, int>::iterator it;
        for(int i: nums)
            ++m[i];
        for(it=m.begin(); it!=m.end(); ++it){
            if(it->second == 1)
                return it->first;
        }
        return NULL;
    }
};
