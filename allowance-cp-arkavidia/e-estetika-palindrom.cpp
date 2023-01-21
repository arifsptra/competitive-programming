// #include <iostream>
// #include<string>
// using namespace std;

// bool isPalindromic(string s, int i, int j)
// {
//     if (i>j){
//         return 1;
//     }
//     if (s[i] != s[j]){
//         return  0;
//     }
//     return isPalindromic(s, i+1, j-1);
// }

// int main() {
//     string str;
//     cin>>str;
//     int count=0;
//     for(int i=0;i<str.length();i++){
//         for(int j=i;j<str.length();j++){
//             if(isPalindromic(str,i,j)){
//                 count++;
//             }
//         }
//     }
//     cout<<count;
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

void longestPalindrome(string s) {
	int n = s.length();

	vector<vector<int> > pref(26, vector<int>(n, 0));
	vector<vector<int> > pos(26);

	pref[s[0] - 'a'][0]++;
	pos[s[0] - 'a'].push_back(0);

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < 26; j++)
			pref[j][i] += pref[j][i - 1];

		int index = s[i] - 'a';
		pref[index][i]++;
		pos[index].push_back(i);
	}

	int ans = 0;

	for (int i = 0; i < 26; i++) {

		int size = pos[i].size();
		ans = max(ans, size);

		for (int j = 0; j < size / 2; j++) {
			int l = pos[i][j];
			int r = pos[i][size - j - 1] - 1;

			for (int k = 0; k < 26; k++) {

                int sum = 0;
				sum = pref[k][r] - pref[k][l];

				ans = max(ans, 3 * (j + 2) + sum - 1);
			}
		}
	}

	cout << ans << "\n";
}

int main() {
	string S;
	cin >> S;

	longestPalindrome(S);

	return 0;
}