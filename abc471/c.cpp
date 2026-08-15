#include<bits/stdc++.h>
#include <fstream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
    int n; cin >> n;
    vector<int>positive;
    vector<int>negative;
    rep(i,n){
    int x; cin >>x;
    if(x < 0)negative.push_back(x);
    else positive.push_back(x);}
    sort(negative.begin(), negative.end()); 
    sort(positive.begin(), positive.end());
    int neg_idx = negative.size() -1;
    int pos_idx = 0;
    long long nowposition = 0;
    long long total = 0;
    rep(i,n){
    long long dist_neg = 2e18; 
    long long dist_pos = 2e18;
    if(neg_idx >= 0){
        dist_neg = abs(nowposition - negative[neg_idx]);
    }
    if(pos_idx < positive.size()){
        dist_pos = abs(nowposition - positive[pos_idx]);}
    if(dist_neg <= dist_pos){
        total += dist_neg;
        nowposition = negative[neg_idx];
        neg_idx--;}
    else{
        total += dist_pos;
        nowposition = positive[pos_idx];
        pos_idx++;
    }}
    cout << total << endl;
    return 0;
}
