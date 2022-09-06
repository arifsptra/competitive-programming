#include <bits/stdc++.h>
#include <string>

using namespace std;

string palindrom(string s){
    string p = s;
    reverse(p.begin(), p.end());
    if(s==p) return "palindrom";
    else return "bukan palindrom";
}

int main(){
    int n;
    cin >> n;
    string s[n];
    for(int i=0; i<n; i++) cin >> s[i];
    for(int i=0; i<n; i++){
        if(i!=n-1){
            cout << palindrom(s[i]) << endl;
        }else {
            cout << palindrom(s[i]) << endl;
        }
    }
    return 0;
}