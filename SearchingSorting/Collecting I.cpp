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
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)cin>>v[i];
//     if(is_sorted(v.begin(),v.end())){
//         cout<<1<<"\n";return;
//     }
//     if(is_sorted(v.rbegin(),v.rend())){
//         cout<<n<<"\n";return;
//     }
//     int rounds=0;
//     set<int> encountered;
//     for(int i=0;i<n;i++){
//         if(encountered.count(v[i]+1))
//         rounds++;
//         encountered.insert(v[i]);
//     }
//     cout<<rounds+1<<"\n";
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


