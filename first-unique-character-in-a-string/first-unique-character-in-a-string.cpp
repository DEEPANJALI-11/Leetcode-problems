class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>m;
        for(auto a:s){
            m[a]++;
        }
        for(int i=0;i<s.size();i++){
            if(m[s[i]]==1)
                    return i;
        }
        return -1;
    }
};