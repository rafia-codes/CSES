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
    int n,m;
    cin>>n>>m;
    vector<int> priceOf(n),availablePay(m);
    multiset<int> price;
    for(int i=0;i<n;i++){cin>>priceOf[i];price.insert(priceOf[i]);}
    for(int i=0;i<m;i++)cin>>availablePay[i];
    for(int i=0;i<m;i++){
        auto ticket = price.upper_bound(availablePay[i]);
        if(ticket!=price.begin()){
            ticket--;
            cout<<*ticket<<"\n";
            price.erase(ticket);
        }
        else cout<<-1<<"\n";
    }

    // set<pair<int,int>> sortedprice;
    // for(int i=0;i<n;i++){
    //     cin>>price[i];
    //     sortedprice.insert({price[i],i});
    // }
    // for(int i=0;i<m;i++)cin>>req[i];
    // sort(price.begin(),price.end());
    // for(int i=0;i<m;i++){
    //     auto it=sortedprice.lower_bound({req[i]+1,0});
    //     if(it!=sortedprice.begin()){
    //         it--;
    //         cout<<it->first<<"\n";
    //         sortedprice.erase(it);
    //     }
    //     else cout<<"-1\n";
    // }
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


