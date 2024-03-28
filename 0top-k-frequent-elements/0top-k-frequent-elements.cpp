struct compare{
    bool operator()(const pair<int,int>&a,const pair<int,int>&b){
        return a.second>b.second;
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        map<int,int>mp;
        for(auto a:nums){
            mp[a]++;
        }
        vector<pair<int,int>>v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),compare());
        for(int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};