class TimeMap {
public:
   unordered_map<int, unordered_map<string, string>> mapp;
    unordered_map<string, set<int>> key_timestamps;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mapp[timestamp][key] = value;
        key_timestamps[key].insert(timestamp);
    }
    
    string get(string key, int timestamp) {
        if(key_timestamps.count(key)) {
            auto it = key_timestamps[key].upper_bound(timestamp);
            if(it == key_timestamps[key].begin()) return "";
            it--;
            return mapp[*it][key];
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