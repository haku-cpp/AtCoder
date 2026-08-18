#include<bits/stdc++.h>
#include <fstream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)


int main(){
    int max_size = 101010;
    vector<int>is_prime(max_size,1);
    is_prime[0]=0;is_prime[1]=0;
    rep(i,max_size){
        if(!is_prime[i])continue;//0なら
        //素数以外落とす
        for(int j = i * 2; j < max_size; j += i)is_prime[j] = 0;
    }
    
    vector<int>a(max_size,0);
    rep(i,max_size){
        if(is_prime[i] && is_prime[(i+1)/2])a[i] = 1;
    }

    vector<int>s(max_size+1,0);
    for(int i = 0; i  < max_size + 1; i++)s[i+1] = s[i] + a[i];

    int q; cin>>q;
    rep(i,q){
        int l,r; cin >> l >> r;
        cout << s[r+1] - s[l] << endl;
    }
} 
