//runtime beats 84% online submissions
//memory usage is less than 28% online submission


class FreqStack {
private:
    map<int, int> freq;
    map<int, stack<int>> groupFreq;
    int maxFreq;
public:
    FreqStack(): maxFreq(0){
    }
    void push(int x){
        ++freq[x];
        if(freq[x]>maxFreq)
            maxFreq = freq[x];
        groupFreq[freq[x]].push(x);
    }
    int pop(){
        auto x = groupFreq[maxFreq].top();
        groupFreq[maxFreq].pop();
        freq[x]--;
        if(groupFreq[maxFreq].size() == 0)
            maxFreq--;
        return x;
    }
};
