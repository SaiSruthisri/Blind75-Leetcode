class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mp;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
           mp[nums[i]]++;
        }
        bool k=0;
        for(auto &x : mp)
        {
            if(x.second >1)
            {
                  k=1;
                  break;
            }
        }
        return k;

    }
};
