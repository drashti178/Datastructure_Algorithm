#include<bits/stdc++.h>
#include<math.h>

using namespace std;

class Solution {
public:
    string reorderSpaces(string text) {
        
        string ans;
        int Word_No=0;
        int Space_No=0;
        for(int i=0;i<text.length();i++)
        {
            if(text[i]==' ')
            {
                Space_No++;
            }
            if(i != 0){
            if((text[i]>=97 && text[i]<=122) && text[i-1]==' ' )
            {
                Word_No++;
            }
            }
            if((text[i]>=97 && text[i]<=122) && i==0 )
            {
                Word_No++;
            }

        }
        if(Word_No==1)
        {
            for(int i=0;i<text.length();i++)
            {
                if((text[i]>=97 && text[i]<=122))
               {
                  ans.push_back(text[i]);
               
               }
            }
            for(int i=0;i<Space_No;i++)
            {
                ans.push_back(' ');

            }
            return ans;
        }
            
        int sp=Space_No/(Word_No-1);
        int k=0;
        for(int i=0;i<text.length();i++)
        {
            
            if(i!=0)
            {
            if(text[i]==' ' && (text[i-1]>=97 && text[i-1]<=122) && k!=Word_No-1)
            {
                
                for(int j=0;j<sp;j++)
                {
                    ans.push_back(' ');
                         
                }
                k++;

            }
            }
            if((text[i]>=97 && text[i]<=122))
            {
                ans.push_back(text[i]);
              
            }
        
            
        }
        if(Space_No%(Word_No-1)!=0)
        {
           int rem=Space_No%(Word_No-1);
           for(int i=0;i<rem;i++)
           {
               ans.push_back(' ');
            
           }
        }
       
        return ans;
    }
};