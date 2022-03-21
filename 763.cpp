//has some bugs need to review later

class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> v;
        map<int, int> m;
        int count=0, next=0, num=0;
        for(int i=0; i!=s.size(); i++){
            if(m.count(s[i]-'a')){
                cout<<endl<<m.count(s[i]-'a')<<" "<<m.begin()->first<<" "<<" "<<s[i]-'a'<<" "<<count;
                count++;
            }
            else{
                m[s[i]-'a']++;
                num = i;
                if(num+1==i || num==0){
                    next++;
                }
                else
                    next = 0;
            }
            if(next == 3){
                v.push_back(count);
                count = next;
                next = 0;
            }
        }
        return v;
    }
};