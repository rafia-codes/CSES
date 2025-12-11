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
    int n;
    cin>>n;
    vector<pair<int,int>> timing(2*n);
    for(int i=0;i<2*n;i++){
        cin>>timing[i].first;timing[i].second=1;i++;
        cin>>timing[i].first;timing[i].second=-1;
    }
    sort(timing.begin(),timing.end());
    int maxperson=0,present=0;
    for(auto &it:timing){
        present+=it.second;
        maxperson=max(maxperson,present);
    }
    cout<<maxperson<<"\n";
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


