class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string,int>m;
        vector<string>ans;
        int n=list1.size(),a=list2.size(),i,j;
        for(i=0;i<n;i++){
            if(m.find(list1[i])==m.end())
                m.insert({list1[i],i});
        }
        int mini=INT_MAX;
        for(i=0;i<a;i++){
            if(m.find(list2[i])!=m.end()){
                if(m[list2[i]]+i <mini)
                        mini=m[list2[i]]+i;
            }
        }
        for(i=0;i<a;i++){
            if(m.find(list2[i])!=m.end() && m[list2[i]]+i == mini){
                ans.push_back(list2[i]);
            }
        }
        return ans;
    }
};