#include<bits/stdc++.h>
#include<math.h>

using namespace std;

class Solution
{
    public:
    vector<int> find(vector<int> nums)
    {
        int n=nums.size();
        vector<int> vec(n,0);
        for(int i=0;i<n;i++)
        {
            vec[nums[i]]++;
        }
        int missing_num;
        int repeating_num;
        for(int i=0;i<n;i++)
        {
            if(vec[nums[i]]==0)
            {
                missing_num=nums[i];
            }
            if(vec[nums[i]]==2)
            {
                repeating_num=nums[i];
            }

             
        }
    }


};