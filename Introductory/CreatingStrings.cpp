#include<bits/stdc++.h>
using namespace std;

int per=0;
vector<string> permut;
void find(int idx,string s,int n){
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

//2nd->O(n! × n x log(n!))  log n! is the insertion time in set
// #include<bits/stdc++.h>
// using namespace std;
 
// set<string> permut;
// void find(int idx,string s,int n){
//     if(idx==n){
//         permut.insert(s);
//         return;
//     }
//     for(int i=idx;i<n;i++){
//         swap(s[i],s[idx]);
//         find(idx+1,s,n);
//         swap(s[i],s[idx]);
//     }
// }
// int main(){
//     string s;
//     cin>>s;
//     find(0,s,s.length());
//     cout<<permut.size()<<"\n";
//     for(auto &it:permut)cout<<it<<"\n";
//     return 0;
// }

//3rd->T(n)=O(P×n)
// #include<bits/stdc++.h>
// using namespace std;
 
// vector<string> permut;
// void find(string word,vector<int>&freq,int n){
//     if(word.length()==n){
//         permut.push_back(word);
//         return;
//     }
//     for(int i=0;i<26;i++){
//         if(freq[i]){
//             freq[i]--;
//             word.push_back(i+'a');
//             find(word,freq,n);
//             word.pop_back();
//             freq[i]++;
//         }
//     }
// }
// int main(){
//     string s;
//     cin>>s;
//     int n=s.length();
//     vector<int> freq(26,0);
//     for(int i=0;i<n;i++)freq[s[i]-'a']++;
//     find("",freq,n);
//     cout<<permut.size()<<"\n";
//     for(auto &it:permut)cout<<it<<"\n";
//     return 0;
// }
