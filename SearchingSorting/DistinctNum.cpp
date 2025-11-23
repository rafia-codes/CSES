#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define kill(x) cout<<x<<"\n";return;
using namespace std;
using ll=long long int;
const int INF = 1e5+9;
 
int32_t main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    int i=0,j=0;
    while(j<n){
        if(v[j]!=v[i])
        v[++i]=v[j];
        j++;
    }
    cout<<i+1<<"\n";
}