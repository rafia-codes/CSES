#include<bits/stdc++.h>
using namespace std;
using ll=long long;

ll mini=LLONG_MAX;
void find(int idx,int n,vector<int>&v,ll pick,ll unpick){
    if(idx==n){
        mini=min(mini,abs(pick-unpick));
        return;
    }
    find(idx+1,n,v,pick+v[idx],unpick);
    find(idx+1,n,v,pick,unpick+v[idx]);
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    find(0,n,v,0,0);
    cout<<mini<<"\n";
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// using ll=long long;

// ll mini=LLONG_MAX;
// void find(int idx,int n,vector<int>&v,ll diff){
//     if(idx==n){
//         mini=min(mini,abs(diff));
//         return;
//     }
//     find(idx+1,n,v,diff+v[idx]);
//     find(idx+1,n,v,diff-v[idx]);
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)
//     cin>>v[i];
//     find(0,n,v,0);
//     cout<<mini<<"\n";
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// using ll=long long;

// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)cin>>v[i];
//     ll mini=LLONG_MAX;
//     for(int mask=0;mask<(1<<n);mask++){
//         ll diff=0;
//         for(int i=0;i<n;i++){
//             if(mask & (1<<i))
//             diff+=v[i];
//             else
//             diff-=v[i];
//         }
//         mini=min(mini,abs(diff));
//     }
//     cout<<mini<<"\n";
//     return 0;
// }