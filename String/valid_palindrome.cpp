#include<bits/stdc++.h>
#include<math.h>

using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        int k=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=97 && s[i]<=122 || s[i]>=48 && s[i]<=57)
            {
                temp.push_back(s[i]);
             
            }
            else if(s[i]>=65 && s[i]<=90)
            {
                char t=s[i]-'A'+'a';
                temp.push_back(t);
               
            }
        }
        int l=0;
        int h=temp.length()-1;
        while(l<=h)
        {
            if(temp[l]!=temp[h])
            {
                return false;
            }
            l++;
            h--;

        }
        return true;
        
    }
};