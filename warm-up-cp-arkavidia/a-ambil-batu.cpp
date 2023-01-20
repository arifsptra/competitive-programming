#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, ma=20, a[20], dp[1ll<<20], pst[1ll<<20];
int main(){
    ll t, rr, i, j, k, mk, cl, cd;
    cin >> n >> t;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int mk=0; mk<1ll<<ma; mk++){
        pst[mk]=-1;
    }
    dp[0]=(1ll<<ma)-2;
    pst[dp[0]]=0;
    for(int i=1; 1; i++){
        k=0;
        for(int j=0; j<n; j++){
            k|=!(dp[i-1]>>a[j]-1&1);
        }
        mk = (dp[i-1]<<1)%(1ll<<ma)|k;
        if(pst[mk]+1){
            cl=i-pst[mk];
            cd=pst[mk];
            break;
        }
        dp[i]=mk;
        pst[mk]=i;
    }
    for(rr=0; rr<t; rr++){
        cin >> k;
        if(k>=cd){
            k=(k-cd)%cl+cd;
        }
        if(dp[k]&1){
            cout << "Elon\n";
        }else{
            cout << "Melvin\n";
        }
    }
}