#include<iostream>
using namespace std;

int power(int x,int n){
    if(n==0)
    {
        return 1;
    }
   
    if(n%2 == 1)
    {
        return x*power(x,n/2)*power(x,n/2);
    }
    return power(x,n/2)*power(x,n/2);
}
int main(){
    int n,x;
    cin>>n>>x;
    cout<<power(x,n);


return 0;
}