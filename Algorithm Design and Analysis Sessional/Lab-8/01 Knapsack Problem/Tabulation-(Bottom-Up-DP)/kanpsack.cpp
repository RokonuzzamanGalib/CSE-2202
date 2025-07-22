#include <iostream>
using namespace std;

int knapsack(int value[], int weight[], int n, int W) {
    int dp[n + 1][W + 1];

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (weight[i - 1] <= w)
                dp[i][w] = max(value[i - 1] + dp[i - 1][w - weight[i - 1]],
                               dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    return dp[n][W];
}

int main() {
    int n, W;

    cout << "Enter number of items: ";
    cin >> n;

    cout << "Enter maximum capacity of knapsack: ";
    cin >> W;

    int value[n], weight[n];

    cout << "Enter " << n << " item values:\n";
    for (int i = 0; i < n; i++) {
        cout << "Value of item " << i + 1 << ": ";
        cin >> value[i];
    }

    cout << "Enter " << n << " item weights:\n";
    for (int i = 0; i < n; i++) {
        cout << "Weight of item " << i + 1 << ": ";
        cin >> weight[i];
    }

    int maxValue = knapsack(value, weight, n, W);
    cout << "Maximum value that can be taken in knapsack: " << maxValue << endl;

    return 0;
}
