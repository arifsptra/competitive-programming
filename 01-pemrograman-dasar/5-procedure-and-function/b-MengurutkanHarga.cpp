#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n+1];
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            int t = arr[j];
            if(arr[i] > arr[j]){
                arr[j] = arr[i];
                arr[i] = t;
                cout << i << " " << j << endl;
            }
        }
    }
    return 0;
}