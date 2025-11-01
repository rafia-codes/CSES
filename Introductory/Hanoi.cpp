#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> path;
int moves=0;
void toh(int n,int src,int aux,int dest){
    if(n==0)return;
    toh(n-1,src,dest,aux);
    moves++;
    path.push_back({src,dest});
    //cout<<src<<" "<<dest<<"\n";
    toh(n-1,aux,src,dest);
}
int main(){
    int n;
    cin>>n;
    toh(n,1,2,3);
    cout<<moves<<"\n";
    for(auto &it:path)cout<<it.first<<" "<<it.second<<"\n";
    return 0;
}