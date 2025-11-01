#include<bits/stdc++.h>
using namespace std;

int main(){
    string seq;
    cin>>seq;
    int c=1,maxi=1;
    for(int i=1;i<seq.length();i++){
        if(seq[i]==seq[i-1]){c++;maxi=max(maxi,c);}
        else c=1;
    }
    cout<<maxi;
}