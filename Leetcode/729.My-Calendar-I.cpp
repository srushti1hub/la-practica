class MyCalendar {
public:
    map<int,int> M;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        auto i = M.upper_bound(start);
        if (i == M.end() || i->second >= end)
        {
            M[end] = start;
            return true;
        }
        else
            return false;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
