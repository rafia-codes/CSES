#include<bits/stdc++.h>
using namespace std;
using ll=long long;

vector<string> generate(int n){
    if(n==1){
        return {"0","1"};
    }
    vector<string> a=generate(n-1);
    vector<string> b=a;
    reverse(b.begin(),b.end());
    for(auto &num:a){
        num="0"+num;
    }
    for(auto &num:b){
        num="1"+num;
    }
    a.insert(a.end(),b.begin(),b.end());
    return a;
}
int main(){
    int n;
    cin>>n;
    vector<string> ans=generate(n);
    for(auto val:ans)cout<<val<<"\n";
    return 0;
}
