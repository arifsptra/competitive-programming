#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n, i, q, x, y, count=0, gcd=0, mini=LLONG_MAX;
    cin >> n;
    ll data[n];
    for(int i=0; i<n; i++){
        cin >> data[i];
        mini = min(mini, data[i]);
    }
    for(int i=0; i<n; i++) gcd = __gcd(gcd, data[i]-mini);
    vector <ll> faktor;
    for(int i=1; i*i<=gcd; i++){
        if(gcd%i==0){
            faktor.push_back(i);
            faktor.push_back(gcd/i);
            count+=2;
        }
    }
    sort(faktor.begin(), faktor.end());
    cin >> q;
    while(q--){
        cin >> x >> y;
        x+=mini;
        y+=mini;
        if(gcd==0){
            cout << y << '\n';
        }else{
            for(i=count-1;i>=0;i--){
                if(y/faktor[i]-(x-1)/faktor[i]>0){
                    break;
                }
            }
            cout << faktor[i] << '\n';
        }
    }
}