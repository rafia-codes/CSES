#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define kill(x) cout<<x<<"\n";return;
const int INF = 1e5+9;

int main(){
    int m,n;
    cin>>n>>m;
    vector<vector<char>> v(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cin>>v[i][j];
    cin.ignore();
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            vector<int> a(4,0);
            char up,left,old=v[i][j];
            a[old-'A']=1;
            if(i-1>=0){up=v[i-1][j];a[up-'A']=1;}
            if(j-1>=0){left=v[i][j-1];a[left-'A']=1;}
            for(int k=0;k<4;k++){if(a[k]==0){v[i][j]=k+'A';break;}}
            cout<<v[i][j];
        }
        cout<<"\n";
    }
}




// int main(){
//     int m,n;
//     cin>>n>>m;
//     vector<vector<char>> v(n,vector<char>(m));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++)
//         cin>>v[i][j];
//     cin.ignore();
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             set<char> s;
//             s.insert(v[i][j]);
//             if(i!=0)s.insert(v[i-1][j]);
//             if(j!=0)s.insert(v[i][j-1]);
//             for(char ch='A';ch<='D';ch++){
//                 if(!s.count(ch)){
//                     v[i][j]=ch;break;
//                 }
//             }
//         }
//         cout<<"\n";
//     }
// }