class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        set<int>s;
        int i,j;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n=nums1.size(), m=nums2.size();
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    ans.push_back(nums1[i]);
                }
            }
        }
         ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
        
    }
};