// Number of Recent Calls

class RecentCounter {
public:
    int recent;
    int count;
    vector<int> req;
    RecentCounter() {
        req = {};
        recent = 0;
        count = 0;
    }
    
    int ping(int t) {
        req.push_back(t);
        count++;
        while (req[recent]<t-3000){
            recent++;
        }
        return count - recent;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */

// use a queue instead