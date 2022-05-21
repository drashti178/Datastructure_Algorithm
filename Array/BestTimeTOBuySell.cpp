#include<bits/stdc++.h>
#include<math.h>

using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int max_profit=0;
        int minSoFar=prices[0];
        for(int i=0;i<n;i++)
        {
            if(prices[i]<minSoFar)
            {
                minSoFar=prices[i];

            }
            if(max_profit<prices[i]-minSoFar)
            {
                max_profit=prices[i]-minSoFar;

            }

        }
        return max_profit;
    }
};