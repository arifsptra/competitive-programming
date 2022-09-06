#include <string>
#define asd ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)
#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int x, a, b;
    for(int i=0; i<q; i++){
        cin >> x >> a >> b;
        if(x == 1){
            swap(s[a-1], s[b-1]);
        }else {
            int len = b-a+1;
            string ss = s.substr(a-1, len);
            reverse(ss.begin(), ss.end());
            s.replace(a-1, len, ss);
        }
    }
    cout << s;
}

int main(){
    asd;
    solve();

    return 0;
}