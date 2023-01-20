#include <bits/stdc++.h>
using namespace std;
int main(){
    string input;
    cin >> input;
    for(int i=0; i<input.length(); i++){
        if(input[i]>='A' && input[i]<='Z'){
            input[i] += 32;
        }
        if(input[i]>=1 && input[i]<=47 || input[i]>=58 && input[i]<=64 || input[i]>=91 && input[i]<=96 || input[i]>=123){
            cout << "Emor tidak beruntung :(";
            return 0;
        }
    }
    reverse(input.begin(), input.end());
    cout << input;
    return 0;
}