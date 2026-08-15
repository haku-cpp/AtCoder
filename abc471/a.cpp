#include<bits/stdc++.h>
#include <fstream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
    int a,b;cin>>a>>b;
    bool ans = false;
    if(a+b==9 || a-b==9 || a*b==9||a / b == 9 && a % b == 0){
        cout << "Nine\n";
        return 0;
    }
    else{
        cout << "Nein\n";
        return 0;
    }
}
