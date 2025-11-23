#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define kill(x) cout<<x<<"\n";return;
using namespace std;
using ll=long long int;
const int INF = 1e5+9;

int32_t main(){
    int n,x;
    cin>>n>>x;
    vector<int> wt(n);
    for(int i=0;i<n;i++)cin>>wt[i];
    sort(wt.begin(),wt.end());
    int i=0,j=n-1,gondola=0;
    while(i<=j){
        if(wt[i]+wt[j]<=x)i++;
        j--;
        gondola++;
    }
    cout<<gondola<<"\n";
}

