#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define kill(x) cout<<x<<"\n";return;
using namespace std;
using ll=long long int;
const int INF = 1e5+9;

int32_t main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<ll> req(n),available(m);
    for(int i=0;i<n;i++)cin>>req[i];
    for(int i=0;i<m;i++)cin>>available[i];
    int c=0;
    sort(req.begin(),req.end());
    sort(available.begin(),available.end());
    int i=0,j=0;
    while(i<n && j<m){
        while(j<m && req[i]-k>available[j])j++;
        if(req[i]-k<=available[j] && available[j]<=req[i]+k){c++;j++;}
        i++;
    }
    cout<<c<<"\n";
}

