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
    vector<pair<int,int>> timings(n);
    for(int i=0;i<n;i++)cin>>timings[i].first>>timings[i].second;
    sort(timings.begin(),timings.end(),[](const pair<int,int> &a,const pair<int,int> &b){
        return a.second<b.second;
    });
    int movies=0,last=-1;
    for(auto &time:timings){
        if(time.first>=last){
            movies++;
            last=time.second;
        }
    }
    cout<<movies<<"\n";
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


