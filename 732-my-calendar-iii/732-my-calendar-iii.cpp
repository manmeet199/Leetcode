class MyCalendarThree {
public:
    map<int, int> count;
    int res;
    MyCalendarThree() {
        res = 0;
        count.emplace(-1, 0);
    }
    
    int book(int s, int e) {
        auto st = count.emplace(s, (--count.upper_bound(s))->second);
        auto et = count.emplace(e, (--count.upper_bound(e))->second);
        for(auto it = st.first; it != et.first; it++) {
            res = max(res, ++(it->second));
        }
        return res;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */