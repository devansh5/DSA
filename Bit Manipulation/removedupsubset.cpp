class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set <vector<int>> s;
        int size=nums.size();
        int subsetsize=1<<size;

        vector<vector<int>> totalsubsets;

        for(int subsetmask=0;subsetmask<subsetsize;++subsetmask)
        {
            vector <int> subset;
            set <vector<int>> unique;
            for(int j=0;j<size;++j)
            {
                if((subsetmask & (1<<(j))) != 0)
                {
                    subset.push_back(nums[j]);
                }
            }
            sort(subset.begin(),subset.end());
            s.insert(subset);
        }
        
        for(auto it=s.begin();it!=s.end();it++)
        {
            totalsubsets.push_back(*it);
        }
        return totalsubsets;
        }
};