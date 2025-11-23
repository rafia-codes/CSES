// #include<bits/stdc++.h>
// using namespace std;

// void solve(){
//     int n,a,b;
//     cin>>n>>a>>b;
//     int ties=n-a-b;
//     n-=ties;//If 3 0 0 then n-=ties => n=0 
//     //n=5 a=3 b=4
//     if((n>=1 && (n==a || n==b)) || n<0 || ties<0){
//         cout<<"NO\n";
//     }else{
//         cout<<"YES\n";
//         for(int i=1;i<=n;i++)cout<<i<<" ";
//         for(int i=n+1;i<=ties+n;i++)cout<<i<<" ";
//         cout<<"\n";
//         for(int i=1;i<=n;i++){
//             int x=i+a;
//             if(x>n)x-=n;
//             cout<<x<<" ";
//         }
//         for(int i=n+1;i<=ties+n;i++)cout<<i<<" ";
//         cout<<"\n";
//     }
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--)solve();
//     return 0;
// }