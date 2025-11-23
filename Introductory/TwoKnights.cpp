// #include<bits/stdc++.h>
// using namespace std;
// using ll=long long;

// void solve(ll n){
//     ll size=n*n;
//     ll tot=size*(size-1)/2;//simple p&c 
//     //__ x __ = tot x tot-1 as both knights same we divide by 2 
//     ll attacks=0;
//     attacks+=8*(n-4)*(n-4);
//     attacks+=6*(n-4)*4;
//     attacks+=4*(n-4)*4+4*4;
//     attacks+=3*8;
//     attacks+=2*4;
//     attacks/=2;//because both knights same we divide by 2 
//     cout<<tot-attacks<<"\n";
// }
// int32_t main(){
//     int n;
//     cin>>n;
//     for(ll i=1;i<=n;i++)solve(i);
// }


//attack grid 
// 23444432
// 34666643
// 46888864
// 46888864
// 46888864
// 46888864
// 34666643
// 23444432