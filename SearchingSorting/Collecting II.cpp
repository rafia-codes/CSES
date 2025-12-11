// #include<bits/stdc++.h>
// #define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// #define kill(x) cout<<x<<"\n";return;
// using namespace std;
// using ll=long long int;
// const int INF = 1e5+9;
// const ll MOD = 1e9+7;

// // ---------- LOCAL RUN / ONLINE SUBMISSION SWITCH ----------
// #ifndef ONLINE_JUDGE
//     #define debug(x) cerr << #x << " = " << x << "\n"
// #else
//     #define debug(x)
// #endif
// // -----------------------------------------------------------

// void solve(){
//     int n,q;
//     cin>>n>>q;
//     vector<int> val(n+1);
//     vector<int> posOf(n+1);
//     for(int i=1;i<=n;i++){
//         cin>>val[i];
//         posOf[val[i]]=i;
//     }
//     int rounds=1;
//     for(int i=1;i<n;i++){
//         rounds += (posOf[i]>posOf[i+1]);//concerned about the position of adjacent values only
//     }
//     int i,j;
//     set<pair<int,int>> affected;
//     while(q--){
//         cin>>i>>j;

//         if(val[i]-1>=1) affected.insert({val[i]-1,val[i]});
//         if(val[j]-1>=1) affected.insert({val[j]-1,val[j]});

//         if(val[i]+1<=n) affected.insert({val[i],val[i]+1});
//         if(val[j]+1<=n) affected.insert({val[j],val[j]+1});

//         for(auto &swap:affected){
//             rounds -= posOf[swap.first] > posOf[swap.second];
//         }

//         swap(val[i],val[j]);
//         posOf[val[i]]=i;
//         posOf[val[j]]=j;

//         for(auto &swap:affected){
//             rounds += posOf[swap.first] > posOf[swap.second];
//         }

//         cout<<rounds<<"\n";
//         affected.clear();
//     }
// }

// int32_t main() {

//     //---------------- LOCAL FILE REDIRECTION ----------------
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     // Optional: for debugging
//     // freopen("error.txt", "w", stderr);
// #endif
//    // ---------------------------------------------------------

//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     solve();

//     return 0;
// }


