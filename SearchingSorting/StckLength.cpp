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
//     sort(v.begin(),v.end());
//     int mid,mid2;
//     if(n%2) mid = n/2;
//     else {mid = n/2 ; mid2 = mid - 1;}
//     ll cost=0,cost2=0;
//     for(int i=0;i<n;i++){
//         cost+=abs(v[i]-v[mid]);
//         if(!(n%2))
//         cost2+=abs(v[i]-v[mid2]);
//     }
//     if(n%2) cout<<cost<<"\n";
//     else cout<<min(cost,cost2)<<"\n";
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


