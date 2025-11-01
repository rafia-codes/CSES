#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const ll MOD=1e9+7;

ll calcpow(int n,int x){
    if(x<2)return n;
    ll half=calcpow(n,x/2);
    if(x%2)return (((n*half)%MOD)*(half%MOD))%MOD;
    else return ((half%MOD)*(half%MOD))%MOD;
    return 1ll;
}
int main(){
    int n;
    cin>>n;
    cout<<calcpow(2,n);
    return 0;
}