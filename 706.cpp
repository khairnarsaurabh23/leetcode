//hash map implementation in cpp

class MyHashMap {
private:
    list<int> *map;
    int elements = 10000;
public:
    MyHashMap() {
        map = new list<int>[elements];
    }

    void put(int key, int value) {
        map[get(key)].push_back(value);
    }

    int get(int key) {
        return key%elements;
    }
    
    void remove(int key) {
        int x = get(key);
        
        list<int>::iterator i;
        for(i = map[x].begin(); i!=map[x].end(); i++){
            if(*i == key)
                break;
        }
        if(i == map[x].end()){
            map[x].erase(i);
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */