//mergeSort using recursion
#include <iostream>
using namespace std;

#define MAX 1000

void print(int ar[], int size) {
    for (int i = 0; i < size; i++)
        cout << ar[i] << ' ';
    cout << endl;
}

void subArray(int ar[], int lb, int lr, int rb, int rr) {
    int i = lb, j = rb, k = lb;
    int temp[MAX];

    while (i <= lr && j <= rr) {
        if (ar[i] < ar[j])
            temp[k++] = ar[i++];
        else
            temp[k++] = ar[j++];
    }

    while (i <= lr)
        temp[k++] = ar[i++];
    while (j <= rr)
        temp[k++] = ar[j++];

    for (int m = lb; m <= rr; m++)
        ar[m] = temp[m];
}

void merge_sort(int ar[], int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        merge_sort(ar, start, mid);
        merge_sort(ar, mid + 1, end);
        subArray(ar, start, mid, mid + 1, end);
    }
}

int main() {
    int arr[] = {56, 0, 5, 10, 3, 9, 4,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr, n);
    merge_sort(arr, 0, n - 1);
    print(arr, n);
    return 0;
}
