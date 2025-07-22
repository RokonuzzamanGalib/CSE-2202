#include <iostream>
using namespace std;

#define MAX 100

void sortByRatio(int value[], int weight[], int n) {
    double ratio[MAX];
    for (int i = 0; i < n; i++) {
        ratio[i] = (double)value[i] / weight[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ratio[i] < ratio[j]) {
                double tempRatio = ratio[i];
                ratio[i] = ratio[j];
                ratio[j] = tempRatio;

                int tempValue = value[i];
                value[i] = value[j];
                value[j] = tempValue;

                int tempWeight = weight[i];
                weight[i] = weight[j];
                weight[j] = tempWeight;
            }
        }
    }
}

double fractionalKnapsack(int capacity, int value[], int weight[], int n) {
    sortByRatio(value, weight, n);

    double totalValue = 0.0;
    int currentWeight = 0;

    for (int i = 0; i < n; i++) {
        if (currentWeight + weight[i] <= capacity) {
            currentWeight += weight[i];
            totalValue += value[i];
        } else {
            int remain = capacity - currentWeight;
            totalValue += (double)value[i] * remain / weight[i];
            break;
        }
    }

    return totalValue;
}

int main() {
    int value[] = {60, 100, 120};
    int weight[] = {10, 20, 30};
    int n = 3;
    int capacity = 50;

    double result = fractionalKnapsack(capacity, value, weight, n);
    cout << "Maximum value in knapsack: " << result << endl;

    return 0;
}
