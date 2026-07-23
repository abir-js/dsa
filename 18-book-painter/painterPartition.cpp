#include <iostream>
using namespace std;

bool canPaint(long long maxTime, vector<int> &arr, int k) {
    int painters = 1;
    long long painted = 0;

    for (int i = 0; i < arr.size(); i++) {

        if (painted + arr[i] <= maxTime) {
            painted += arr[i];
        } else {
            painters++;
            painted = arr[i];
        }
    }

    return painters <= k;
}

long long minTime(vector<int> &arr, int k) {

    if (k > arr.size())
        return -1;

    long long low = 0;
    long long high = 0;

    for (int board : arr) {
        low = max(low, (long long)board);
        high += board;
    }

    long long ans = high;

    while (low <= high) {

        long long mid = low + (high - low) / 2;

        if (canPaint(mid, arr, k)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {

    vector<int> boards = {10, 20, 30, 40};
    int painters = 2;

    cout << minTime(boards, painters);

    return 0;
}