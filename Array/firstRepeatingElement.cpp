#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];


    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }


    const int N = 1e6+2;
    int indx[N]={-1};
    int min_indx=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(indx[a[i]] != -1)
        {
            min_indx = min(min_indx,indx[a[i]]);
        }
        else
        {
             indx[a[i]]=i;
        }
    }

    if(min_indx == INT_MAX)
    {
        cout<<"-1 "<<endl;
    }
    else
    {
        cout<<min_indx<<endl;
    }

    return 0;
}


