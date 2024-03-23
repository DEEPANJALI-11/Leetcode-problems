class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        map<int,int>m1,m2;
        set<int>ans;
        vector<int>res;
        for(auto a:nums1)
                m1[a]++;
        for(auto a:nums2)
                m2[a]++;
        for(int i=0;i<n;i++){
            if(m2.find(nums1[i])!=m2.end()){
                ans.insert(nums1[i]);
            }
        }
        for(auto a:ans)
                res.push_back(a);
        return res;
    }
};