#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int> freq(26,0);
    for(int i=0;i<s.length();i++)freq[s[i]-'A']++;
    int c=0;
    for(int i=0;i<26;i++)if(freq[i]%2)c++;
    if(c>1)cout<<"NO SOLUTION\n";
    else{
        string ans,odd;
        for(int i=0;i<26;i++){
            if(freq[i]%2) odd=string(freq[i],i+'A');
            else ans+=string(freq[i]/2,i+'A');
        }
        cout<<ans<<odd;
        reverse(ans.begin(),ans.end());
        cout<<ans<<"\n";
    }
    return 0;
}

// int main(){
//     string s;
//     cin>>s;
//     int n=s.length();
//     vector<int> freq(26,0);
//     for(int i=0;i<n;i++)freq[s[i]-'A']++;
//     bool already_mid=false;
//     int taken=0;
//     for(int i=0;i<26;i++){
//         if(freq[i]%2){
//             if(n%2==0 || already_mid){
//                 cout<<"NO SOLUTION\n";
//                 return 0;
//             }
//             else{
//             already_mid=true;
//             s[n/2]=i+'A';
//             }
//         }
//         int half=freq[i]/2;
//         for(int c=0;c<half;c++)
//         s[c+taken]=s[n-1-c-taken]=i+'A';
//         taken+=half;
//     }
//     cout<<s<<"\n";
//     return 0;
// }