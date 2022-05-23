#include<iostream>
#include<string.h>
using namespace std;

bool palindrome(int l,int r,string s)
{
    if(l>=r)
        return true;
    if(s[l]!=s[r])
        return false;
    palindrome(l+1,r-1,s);
}
int main(){
    string s;
    cin>>s;
    cout<<palindrome(0,s.length()-1,s);



return 0;
}