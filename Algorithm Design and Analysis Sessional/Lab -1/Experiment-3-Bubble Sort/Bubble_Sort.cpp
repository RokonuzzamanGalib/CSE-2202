//Bubble Sort
#include<iostream>
using namespace std;

int main(){
   int arr[]={99,85,74,35,14,57,38,94,12,65},N;
   N = sizeof(arr) / sizeof(arr[0]);
       cout << "Unsorted Array: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
   for (int i = 0; i < N-1; i++)
   {
      int flag = 0;
        for (int j = 0; j < N - i - 1; j++) {
          if (arr[j] > arr[j + 1]) {
                  int temp = arr[j];
                  arr[j] = arr[j + 1];
                  arr[j + 1] = temp;

                flag = 1;
            }
        }
        if (flag=0)
        {
          break;
        }     
   }

    cout << "Sorted Array: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}