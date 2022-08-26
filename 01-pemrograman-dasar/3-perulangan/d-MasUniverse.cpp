#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, result=0;
    cin >> N;
    int peserta[N];
    for(int i = 0; i < N; i++){
        cin >> peserta[i];
    }
    for(int i = 0; i < N; i++){
        if(peserta[i] > result){
            result = peserta[i];
        }
    }
    cout << result;
    return 0;	
}