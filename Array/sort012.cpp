//Dutch National Flag Algorithm
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

class Solution{
    public:
    void sort3(vector<int>& nums)
    {
        int low=0;
        int mid=0;
        int high=nums.size()-1;

        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid++],nums[low++]);
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid],nums[high--]);
            }
        }
    }

};