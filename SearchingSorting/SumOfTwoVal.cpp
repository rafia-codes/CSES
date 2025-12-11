#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define kill(x) cout<<x<<"\n";return;
using namespace std;
using ll=long long int;
const int INF = 1e5+9;
const ll MOD = 1e9+7;

// ---------- LOCAL RUN / ONLINE SUBMISSION SWITCH ----------
#ifndef ONLINE_JUDGE
    #define debug(x) cerr << #x << " = " << x << "\n"
#else
    #define debug(x)
#endif
// -----------------------------------------------------------

void solve(){
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){cin>>v[i].first;v[i].second=i+1;}
    sort(v.begin(),v.end());
    int i=0,j=n-1;
    while(i<j){
        int s=v[i].first+v[j].first;
        if(s == x){
            cout<<v[i].second<<" "<<v[j].second;return;
        }
        else if(s < x) i++;
        else j--; 
    }
    cout<<"IMPOSSIBLE\n";
}

int32_t main() {

    //---------------- LOCAL FILE REDIRECTION ----------------
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // Optional: for debugging
    // freopen("error.txt", "w", stderr);
#endif
   // ---------------------------------------------------------

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}


