class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        map<int,int>mp;
        int ans=0;
        for(auto a:nums1){
            for(auto b:nums2){
                mp[a+b]++;
            }
        }
        for(auto c:nums3){
            for(auto d:nums4){
                if(mp.find(0-(c+d))!=mp.end())
                        ans+=mp[0-(c+d)];
            }
        }
        return ans;
    }
};