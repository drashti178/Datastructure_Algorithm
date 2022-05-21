#include<bits/stdc++.h>
#include<math.h>

using namespace std;
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int n1=nums1.size(); 
        int n2=nums2.size();
        int temp,k=0;
        for(int i=0;i<n1;i++)
        {
            for(int j=k;j<n2;j++)
            {
                if(nums1[i]==nums2[j])
                {
                    res.push_back(nums1[i]);
                    temp=nums2[k];
                    nums2[k]=nums2[j];
                    nums2[j]=temp;
                    k++;
                    break;

                }
            }
        }
        return res;
        
    }
};