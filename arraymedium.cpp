// Longest subarray with given sum K(positives)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter K: ";
    cin >> k;

    int left = 0;
    int right = 0;
    int sum = 0;
    int maxLen = 0;

    while (right < n) {

        sum += arr[right];

        while (sum > k) {
            sum -= arr[left];
            left++;
        }

        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

        right++;
    }

    cout << "Longest subarray length: " << maxLen << endl;

    return 0;
}