// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main(){
//     int N;
//     ll K;
//     cin >> N >> K;
//     ll W;
//     ll min_power = 9223372036854775807;
//     for(int i = 0; i < N; i++) {
//         cin >> W;
//         int power = 0;
//         ll temp = W;
//         while(temp != K) {
//             if(temp > K) {
//                 temp = temp/2;
//             } else {
//                 temp = temp + 1;
//             }
//             power++;
//         }
//         if(power < min_power) {
//             min_power = power;
//         }
//     }
//     cout << min_power << endl;
//     return 0;
// }
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;
    long long min_steps = k;
    for (int i = 0; i < n; i++) {
        long long w;
        cin >> w;
        long long steps = 0;
        long long x = w;
        while (x > k) {
            if (x % 2 == 0) {
                x /= 2;
            } else {
                x++;
            }
            steps++;
        }
        steps += abs(x - k);
        min_steps = min(min_steps, steps);
    }
    cout << min_steps << endl;
    return 0;
}
