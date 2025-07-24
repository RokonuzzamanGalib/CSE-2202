#include <iostream>
using namespace std;

int dp[100][200];  // Memo table

int knapsack(int W, int wt[], int val[], int n) {
    if (n == 0 || W == 0) 
           return 0;

    if (dp[n][W] != -1)
        return dp[n][W];

    if (wt[n-1] > W)
        dp[n][W] = knapsack(W, wt, val, n-1);
    else {
        int includeItem = val[n-1] + knapsack(W - wt[n-1], wt, val, n-1);
        int excludeItem = knapsack(W, wt, val, n-1);
        dp[n][W] = (includeItem > excludeItem) ? includeItem : excludeItem;
    }
    return dp[n][W];
}

int main() {
    int n, W;
    cout<<"Enter n and W : ";
    cin >> n >> W;

    int val[n], wt[n];
    
    for (int i = 0; i < n; i++) {
        cout<<"Enter Value of obj "<<i+1<<" ";
        cin >> val[i];
    }

    for (int i = 0; i < n; i++){
        cout<<"Enter Weight of obj "<<i+1<<" ";
    cin >> wt[i];  
     }

    // Initialize dp array with -1
    for (int i = 0; i <= n; i++)
        for (int w = 0; w <= W; w++)
            dp[i][w] = -1;

    cout << knapsack(W, wt, val, n) << endl;
    return 0;
}
