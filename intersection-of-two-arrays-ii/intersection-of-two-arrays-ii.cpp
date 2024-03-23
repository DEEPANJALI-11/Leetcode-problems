class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>fq;
        vector<int>ans;
        for(auto a:nums1){
            fq[a]++;
        }
        for(int i=0;i<nums2.size();i++){
            if(fq[nums2[i]]>0){
                ans.push_back(nums2[i]);
                fq[nums2[i]]--;
            }
        }
        return ans;
    }
};