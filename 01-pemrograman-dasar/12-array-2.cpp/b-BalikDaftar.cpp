#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[100], i=0;
    while(cin>>a[i]){
        i++;
    }
    for(int j=i-1; j>=0; j--){
        cout << a[j] << endl;
    }
    return 0;
}