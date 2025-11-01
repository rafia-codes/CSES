#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
void printv(vector<int> &vec){
    cout<<vec.size()<<"\n";
    for(auto &it:vec)cout<<it<<" ";
    cout<<"\n";
}
void findways(ll target,vector<int> &pick,vector<int> &unpick,int n){
    for(int i=n;i>0;i--){
        if(target>=i){
            pick.push_back(i);
            target-=i;
        }
        else unpick.push_back(i);
    }
    printv(pick);
    printv(unpick);
    // if(i>n)return s==target;
    // pick.push_back(i);
    // if(findways(i+1,s+i,target,pick,unpick,n))return true;
    // pick.pop_back();
    // unpick.push_back(i);
    // if(findways(i+1,s,target,pick,unpick,n))return true;
    // unpick.pop_back();
    // return false;
}
int main(){
    int n;
    cin>>n;
    ll s=1ll*n*(n+1)/2;
    if(s%2)cout<<"NO\n";
    else{
        cout<<"YES\n";
        vector<int> pick,unpick;
        findways(s/2,pick,unpick,n);
    }
    return 0;
}