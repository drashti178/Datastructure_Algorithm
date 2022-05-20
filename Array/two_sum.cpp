#include<bits/stdc++.h>
#include<math.h>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n= nums.size();
        int diff;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            diff=target-nums[i];
            if(m.find(diff)!=m.end() && m.find(diff)->second != i)
            {
                ans.push_back(i);
                ans.push_back(m.find(diff)->second);
                return ans;
            }
            m[nums[i]]=i;

        }
        return ans;
        
    }
};