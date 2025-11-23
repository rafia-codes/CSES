// #include<bits/stdc++.h>
// using namespace std;
// using ll=long long;
// #define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// #define kill(x) cout<<x<<"\n";return;
// const int INF = 1e5+9;
// vector<pair<int,int>> dirs={{-2,-1},{-1,-2},{2,-1},{-1,2},{-2,1},{1,-2},{1,2},{2,1}};

// int main(){
//     int n;
//     cin>>n;
//     vector<vector<int>> v(n,vector<int>(n,INF));
//     vector<pair<int,int>> q;
//     v[0][0]=0;
//     q.emplace_back(0,0);
//     for(int i=0;i<(int)q.size();i++){
//         auto row = q[i].first,col = q[i].second;
//         for(auto &dir:dirs){
//             int nr = row + dir.first;
//             int nc = col + dir.second;
//             if(0<=min(nr,nc) && max(nr,nc)<n && v[nr][nc]==INF){
//                 v[nr][nc] = 1 + v[row][col];
//                 q.emplace_back(nr,nc);
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++)
//         cout<<v[i][j]<<" ";
//     cout<<"\n";
//     }
// }