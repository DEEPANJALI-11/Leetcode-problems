class RandomizedSet {
    private:
    vector<int>v;
    unordered_map<int,int>m;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(m.count(val))
            return false;
        
            m[val]=v.size();
            v.push_back(val);
            return true;
        
    }
    
    bool remove(int val) {
        if(!m.count(val))
            return false;
        int l=v.back();
        m[l]=m[val];
        v[m[val]]=l;
        v.pop_back();
        m.erase(val);
        return true;

    }
    
    int getRandom() {
        return (v[rand()%v.size()]);
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */