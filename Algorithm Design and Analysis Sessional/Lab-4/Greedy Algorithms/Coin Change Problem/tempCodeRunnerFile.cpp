#include <iostream>
#include <algorithm>  // For sort() .so we can use sort funtion 
using namespace std;

int main() {
   
    int coins[10];
    int coinCount[10] = {0};
    int numCoins;
    int amount;

    
    cout << "Enter the number of coin denominations: ";
    cin >> numCoins;

    if (numCoins <= 0 ) {
        cout << "Invalid number of coin denominations.\n";
        return 1;
    }

    
    cout << "Enter the coin denominations:\n";
    for (int i = 0; i < numCoins; ++i) {
        cin >> coins[i];
        if (coins[i] <= 0) {
            cout << "Coin values must be positive.\n";
            return 1;
        }
    }

   
    cout << "Enter the amount to change: ";
    cin >> amount;

    if (amount < 0) {
        cout << "Amount must be non-negative.\n";
        return 1;
    }

    // sort(begin, end, comparator); funtion
    
    //( its new )

    //here "coins + numCoins" is pointer &coins[numCoins]  it's for me

    sort(coins, coins + numCoins, greater<int>());
    

    int totalCoinsUsed = 0;


    for (int i = 0; i < numCoins; ++i) {
        while (amount >= coins[i]) {
            amount =amount - coins[i];
            coinCount[i]++;
            totalCoinsUsed++;
        }
    }

    if (amount != 0) 
       {
        cout << "Cannot make exact change with the given coins.\n";
       } 
    else {
        cout << "\nTotal coins used: " << totalCoinsUsed << endl;
        cout << "Coins used:\n";
        for (int i = 0; i < numCoins; ++i) {
            if (coinCount[i] > 0) {
                cout << coins[i] << " x " << coinCount[i] << endl;
            }
        }
    }

    return 0;
}
