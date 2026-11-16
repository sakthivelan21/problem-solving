class AllOne {
public:
    unordered_map<string,int> map;
    set<pair<int,string>> my_set;
    AllOne() {

    }
    
    void inc(string key) {
        int count = map[key];
        my_set.erase({count,key});
        map[key]++;
        my_set.insert({count+1,key});
    }
    
    void dec(string key) {
        int count = map[key];
        my_set.erase({count,key});
        map[key]--;
        count--;
        if(count<=0)
            map.erase(key);
        else
            my_set.insert({count,key});
    }
    
    string getMaxKey() {
        if(my_set.empty())
            return "";
        return my_set.rbegin()->second;
    }
    
    string getMinKey() {
        if(my_set.empty())
            return "";
        return my_set.begin()->second;
    }
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */