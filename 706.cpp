//hash map implementation in cpp

//simple implementation 
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


//chaining implementation
class MyHashMap {
 private:
  static const int kSize = 10000;
  vector<list<pair<int, int>>> lists; //list is used for chaining poupose
 public:
  //initialize the list
  MyHashMap() : lists(kSize) {}

  //insert operation
  void put(int key, int value) {
    auto& pairs = lists[key % kSize];
    for (auto& [k, v] : pairs)
      if (k == key) {
        v = value;
        return;
      }
    pairs.emplace_back(key, value);
  }

  //getter method
  int get(int key) {
    const auto& pairs = lists[key % kSize];
    for (const auto& [k, v] : pairs)
      if (k == key)
        return v;
    return -1;
  }

  //remove operation
  void remove(int key) {
    auto& pairs = lists[key % kSize];
    for (auto it = begin(pairs); it != end(pairs); ++it)
      if (it->first == key) {
        pairs.erase(it);
        return;
      }
  }
};