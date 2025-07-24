#include <iostream>
#include <vector>
using namespace std;

int coinRowSum(vector<int>& coins) {
    int n = coins.size();
    if (n == 0)
      return 0;
    else if (n == 1) 
     return coins[0];

    vector<int> dp(n);
    dp[0] = coins[0];
    dp[1] = max(coins[0], coins[1]);

    for (int i = 2; i < n; i++) {
        dp[i] = max(dp[i - 1], coins[i] + dp[i - 2]);
    }

    return dp[n - 1];
}

int main() {
    int n;
    cout << "Enter number of coins: ";
    cin >> n;

    vector<int> coins(n);
    cout << "Enter the values of the coins: ";
    for (int i = 0; i < n; i++) {
        cout << "Coin " << i + 1 << ": ";
        cin >> coins[i];
    }

    int total = coinRowSum(coins);
    cout << "Maximum value collected : " <<total << endl;

    return 0;
}
