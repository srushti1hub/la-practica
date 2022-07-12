class Solution {
public:
    bool solve(int i,vector<int>& matchsticks,vector<int>& sides)
    {
        if(i == matchsticks.size())
            return sides[0] == 0 && sides[1] == 0 && sides[2] == 0 && sides[3] == 0 ;
        
        for(int j=0; j<4; j++){
            if(matchsticks[i] > sides[j]) continue;
            sides[j] -= matchsticks[i];
            if(solve(i+1,matchsticks,sides)) return true;
            sides[j] += matchsticks[i];
        }
        return false;
    }
    bool makesquare(vector<int>& matchsticks) {
        int sum = 0;
        
        for(auto i: matchsticks)
            sum += i;
        
        if(sum%4 != 0)
            return false;
        
        sort(matchsticks.begin(),matchsticks.end(),greater<int>());
        vector<int> sides{sum/4,sum/4,sum/4,sum/4};
        
        return solve(0,matchsticks,sides);
    }
};
