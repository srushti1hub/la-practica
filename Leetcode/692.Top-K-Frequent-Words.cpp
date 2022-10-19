class Solution {
public:
    struct Compare {
        bool operator() (pair<int, string> a, pair<int, string> b) {
            if(a.first == b.first) return a.second > b.second;
            else return a.first < b.first;
        }
    };

    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map <string,int> Map;

        for(auto s: words){
            Map[s]++;
        }
        
        priority_queue<pair<int, string>, vector<pair<int, string>>, Compare> PQ;
        for(auto i : Map)
            PQ.push({i.second, i.first});
        
        vector<string> ans;
        while(k--) {
            ans.push_back(PQ.top().second);
            PQ.pop();
        }
        
        return ans;
    }
};
