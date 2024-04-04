class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int>ans;
        int n=mat.size();
        int m=mat[0].size();
        map<int,vector<int>>mp;
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                mp[i+j].push_back(mat[i][j]);
            }
        }
        bool rev=true;
        for(auto a:mp){
            if(rev){
                reverse(a.second.begin(),a.second.end());
            }
            for(auto&b:a.second)
            ans.push_back(b);
            rev=!rev;
        }
        return ans;
    }
};