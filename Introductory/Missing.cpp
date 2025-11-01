#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long s=0;
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){cin>>v[i];s+=v[i];}
    cout<<(1ll*n*(n+1)/2)-s;
    return 0;
}