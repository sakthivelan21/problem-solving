class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>> map;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        map[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        
        if(map.find(key)==map.end())
            return "";
        
        vector<pair<int,string>> &arr= map[key];
        int left = 0,right = arr.size()-1, mid = 0;

        while(left<=right){
            // prevents number overflow 
            mid = left+(right-left)/2;

            if(arr[mid].first<timestamp) {
                left = mid+1;
            }else if(arr[mid].first>timestamp) {
                right = mid-1;
            }
            else 
                return arr[mid].second;
        }

        if(right>=0) {
            return arr[right].second;
        }
        return "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */