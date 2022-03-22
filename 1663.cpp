// Space: O(1)
// Time: o(N)
class Solution {
public:
    string getSmallestString(int n, int k) {
        string s(n, 'a');
        k -= n;
        for (int i = n - 1; k > 0; --i) {
            int d = min(k, 25);
            cout<<s[i]<<" "<<d<<endl;
            s[i] += d;
            cout<<s[i]<<" "<<d<<endl;
            k -= d;
        }
        cout<<122-'a'+90;
        return s;
    }
};