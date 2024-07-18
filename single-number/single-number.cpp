class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto a:nums){
            mp[a]++;
        }
        int ans=-1;
        for(auto a:mp){
            if(a.second==1)
                    ans= a.first;
        }
        return ans;
    }
};