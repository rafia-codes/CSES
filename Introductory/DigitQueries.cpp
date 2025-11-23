// #include<bits/stdc++.h>
// #define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// #define kill(x) cout<<x<<"\n";return;
// using namespace std;
// using ll=long long int;
// const int INF = 1e5+9;
// //O(log10(k))
// void solve(){
//     ll q;
//     cin>>q;
//     ll ctr=9,skipped=0;//no of numbers 
//     for(int len=1;true;len++){
//         if(q>len*ctr){
//             q-=(len*ctr);
//             skipped+=ctr;
//         }
//         else{
//             ll skip=(q-1)/len;
//             skipped+=skip;
//             q-=(skip*len);
//             ll x=skipped+1;
//             cout<<to_string(x)[q-1]<<"\n";
//             return;
//         }
//         ctr*=10;
//     }
// }
// int32_t main(){
//     int t;
//     cin>>t;
//     while(t--)solve();
// }

// // 1 x 9
// // 2 x 90
// // 3 x 900
// // 4 x 9000
// // 5 x 90000