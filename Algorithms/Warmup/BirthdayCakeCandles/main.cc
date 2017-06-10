#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    int tallest_candle = 0, num_tallest_candles = 0;
    for (int i = 0; i < n; i++) {
        if (ar[i] > tallest_candle) {
            tallest_candle = ar[i];
            num_tallest_candles = 1;
        }
        else if (ar[i] == tallest_candle) {
            num_tallest_candles++;
        }
    }
    return num_tallest_candles;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
