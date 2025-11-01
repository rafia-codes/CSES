#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int n;
    cin>>n;
    int ans=0;
    for(ll i=5;i<=n;i*=5)
    ans+=n/i;
    cout<<ans;
    return 0;
}

//5...10....15....20.....25->(5*5)-this extra 5 will pair with any 2 (can be picked from any even no.)
//n/5 + n/25 + n/125 + n/625