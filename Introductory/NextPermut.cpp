#include<bits/stdc++.h>
using namespace std;

int per=0;
vector<string> permut;
void find(int idx,string s,int n){//O(N x N!)
    sort(s.begin(),s.end());
    do{
        permut.push_back(s);per++;
    }while(next_permutation(s.begin(),s.end()));
}
int main(){
    string s;
    cin>>s;
    find(0,s,s.length());
    cout<<per<<"\n";
    for(auto &it:permut)cout<<it<<"\n";
    return 0;
}