#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define kill(x) cout<<x<<"\n";return;
using namespace std;
using ll=long long int;
const int INF = 1e5+9;
//N x 26 x 26
// int32_t main(){
//     string s;
//     cin>>s;
//     int len=s.length();
//     bool isPossible=true;
//     vector<int> freq(26,0);
//     for(char ch:s){
//         freq[ch-'A']++;
//         if(len%2==1 && freq[ch-'A']>len/2+1){isPossible=false;break;}
//         if(len%2==0 && freq[ch-'A']>len/2){isPossible=false;break;}
//     }
//     if(!isPossible){
//         cout<<-1<<"\n";
//         return 0;
//     }
//     string ans;
//     while((int)ans.length()<len){
//         bool anything=false;
//         for(int i=0;i<26;i++){
//             if(freq[i]>0 && (ans.empty() || ans.back()!=('A'+i))){
//                 freq[i]--;
//                 ans+=(i+'A');
//                 //if this placement would make up the remaining string or not
//                 int suffix=len-(int)ans.length();
//                 bool can_finish=true;
//                 for(int j=0;j<26;j++){
//                     if(i!=j){
//                         if(freq[j]>(suffix+1)/2){
//                             can_finish=false;break;
//                         }
//                     }else{
//                         if(freq[j]>suffix/2){
//                             can_finish=false;
//                             break;
//                         }
//                     }
//                 }
//                 if(can_finish){
//                 anything=true;break;
//                 }else{
//                     freq[i]++;
//                     ans.pop_back();
//                 }
//             }
//         }
//         if(!anything)break;
//     }
//     if(ans.empty())cout<<-1<<"\n";
//     else cout<<ans<<"\n";
// }

//inner-for-loop removed
// int32_t main(){
//     // int t;
//     // cin>>t;
//     // while(t--)solve();
//     string s;
//     cin>>s;
//     int len=s.length();
//     bool isPossible=true;
//     vector<int> freq(26,0);
//     for(char ch:s){
//         freq[ch-'A']++;
//         if(len%2==1 && freq[ch-'A']>len/2+1){isPossible=false;break;}
//         if(len%2==0 && freq[ch-'A']>len/2){isPossible=false;break;}
//     }
//     if(!isPossible){
//         cout<<-1<<"\n";
//         return 0;
//     }
//     string ans;
//     while((int)ans.length()<len){
//         bool anything=false;
//         pair<int,int> big{0,0};//finding max1,max2
//         for(int x:freq){
//             if(x>big.first){
//                 big={x,big.first};
//             }else if(x>big.second){
//                 big.second=x;
//             }
//         }
//         for(int i=0;i<26;i++){
//             if(freq[i]>0 && (ans.empty() || ans.back()!=('A'+i))){
//                 freq[i]--;
//                 ans+=(i+'A');
//                 //if this placement would make up the remaining string or not
//                 int suffix=len-(int)ans.length();
//                 bool can_finish=true;
//                 if(freq[i]>suffix/2){
//                     can_finish=false;
//                     break;
//                 }
//                 if((freq[i]+1 == big.first?big.second:big.first)>(suffix+1)/2){
//                     can_finish=false;
//                 }
//                 //repalaced 26 loop with 2 ifs
//                 if(can_finish){
//                 anything=true;break;
//                 }else{
//                     freq[i]++;
//                     ans.pop_back();
//                 }
//             }
//         }
//         if(!anything)break;
//     }
//     if(ans.empty())cout<<-1<<"\n";
//     else cout<<ans<<"\n";
// }

