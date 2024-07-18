class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        set<int>s;
        unordered_map<int,int>mp1,mp2;
        for(auto a:nums2){
            mp2[a]++;
        }
        for(int i=0;i<nums1.size();i++){
            if(mp2.find(nums1[i])!=mp2.end()){
                s.insert(nums1[i]);
            }
        }
        for(auto a:s){
            ans.push_back(a);
        }
        return ans;
    }
};