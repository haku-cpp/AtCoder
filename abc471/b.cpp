#include<bits/stdc++.h>
#include <fstream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
    int n;cin>>n;
    map<string,int>mp;
    rep(i,n){
        string s;
        cin>>s;
        for(char &c:s)c = tolower(c);
        mp[s]++;
    }
    int max_value = -2e9;
    for(auto[x,y]:mp){
        max_value = max(max_value,y);
    }
    cout << max_value << endl;
}
