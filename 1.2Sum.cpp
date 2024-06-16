class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int l=nums.size();
        set<int>a;
        for(int i=0;i<l;i++)
        {

            int y=target-nums[i];
            for(int j=0;j<l;j++)
            {
                   if( i!=j && nums[j]==y)
                   {
                    a.insert(i);
                    a.insert(j);
                    break;
                   }
            }
        }
        vector<int>b;
        for(auto x: a)
        {
            b.push_back(x);
        }
        return b;
    }

};
