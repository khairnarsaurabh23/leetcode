//Runtime: 12ms, faster than 51.91% submissions
//memoru usage:7.4MB, less than 25.75% submissions

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char, int>m;
        int target = s1.size();
        for(char c: s1)
            ++m[c];
        for(int r=0, l=0; r<s2.size(); r++){
          if (--m[s2[r]] >= 0)
            --target;
          while (target == 0) {
            if (r - l + 1 == s1.length())
              return true;
            if (++m[s2[l++]] > 0)
              ++target;
            }
        }
        return false;
    }
};
