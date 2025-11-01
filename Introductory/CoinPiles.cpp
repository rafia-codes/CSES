#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll a,b;
    cin>>a>>b;
    while(a>b){a-=2;b-=1;}
    while(a<b){a-=1;b-=2;}
    if(a==0 && b==0)cout<<"YES\n";
    else if(a>0 && b>0 && a%3==0 && b%3==0)cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}

