#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }

    long int sum = 0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
        sum += arr[arr_i];
    }

    long int min_sum = sum;
    long int max_sum = 0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
        if (sum - arr[arr_i] < min_sum) {
            min_sum = sum - arr[arr_i];
        }
        if (sum - arr[arr_i] > max_sum) {
            max_sum = sum - arr[arr_i];
        }
    }

    cout << min_sum << " " << max_sum;

    return 0;
}
