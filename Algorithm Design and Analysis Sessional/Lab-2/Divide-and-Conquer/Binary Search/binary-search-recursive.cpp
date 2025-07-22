//binary Search
#include <iostream>
using namespace std;
void print(int Arr[],int size){
    cout <<"The Array : ";
    for (int i = 0; i < size; i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<endl;
}
int binarysearch(int arr[], int LB, int UB, int ITEM) {
    if (LB > UB)
        return -1;
    //int mid = LB + (UB - LB) / 2;
    int mid=(LB+UB) / 2;
    if (arr[mid] == ITEM)
        return mid;
    if (arr[mid] < ITEM)
        return binarysearch(arr, mid + 1, UB, ITEM);
    return binarysearch(arr, LB, mid - 1, ITEM);
}

int main() {
    int LSA[] = {2, 3, 4, 5, 6, 7, 9, 11, 13, 14, 17, 19, 24, 26, 29, 31};
    int N = sizeof(LSA) / sizeof(LSA[0]);
    print(LSA,N);
    int ITEM, LOC;
    cout << "Please enter the element you want to find: ";
    cin >> ITEM;
    LOC = binarysearch(LSA, 0, N - 1, ITEM);
    if (LOC == -1)
        cout << "The element was not found in the array." << endl;
    else
        cout << "The element you want to find is at index " << LOC << "." << endl;
    return 0;
}
