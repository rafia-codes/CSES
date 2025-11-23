// #include<bits/stdc++.h>
// using namespace std;
// using ll=long long;
// #define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// #define kill(x) cout<<x<<"\n";return;

// int main(){
//     int n;
//     cin>>n;
//     vector<vector<int>> v(n,vector<int>(n));
//     for(int r=0;r<n;r++){
//         for(int c=0;c<n;c++){
//             set<int> s;
//             for(int i=0;i<r;i++)s.insert(v[i][c]);
//             for(int j=0;j<c;j++)s.insert(v[r][j]);
//             int x=0;
//             while(s.count(x))x++;
//             v[r][c]=x;
//             cout<<x<<" ";
//         }
//         cout<<"\n";
//     }
// }