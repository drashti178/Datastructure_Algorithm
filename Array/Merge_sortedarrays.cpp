#include<bits/stdc++.h>
#include<math.h>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int h=m+n-1;
        while(m>0 && n>0)
        {
            if(nums1[m-1]>nums2[n-1])
            {
                nums1[h]=nums1[m-1];
                h--;
                m--;

            }
            else{
                nums1[h]=nums2[n-1];
                h--;
                n--;
            }

        }
        while(n>0)
        {
             nums1[h]=nums2[n-1];
                h--;
                n--;
        }
        
        
    }
};