class Solution {
public:
    static bool cmp(vector<int> &a , vector<int> &b){
        return a[1]<b[1];
    }
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        int cnt = 0;
        vector<int> temp = intervals[0];
        for(int i=1; i<intervals.size(); i++){
            if(intervals[i][0] < temp[1]) cnt++;
            else temp = intervals[i];
        }
        return cnt;
    }
};
