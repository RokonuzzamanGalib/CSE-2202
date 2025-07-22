#include <iostream>
using namespace std;

int main() {
    int LSA[] = {2, 3, 4, 5, 6, 7, 9, 11, 13, 14, 17, 19, 24, 26, 29, 31}; 
    int N = sizeof(LSA) / sizeof(LSA[0]);
    int LB, UB, ITEM, LOC;
    
    cout << "Please enter the element you want to find: ";
    cin >> ITEM;

    LB = 0;          
    UB = N - 1;     
    LOC = -1;        
    
   
    while (LB <= UB) {
        int mid = (LB + UB) / 2;

        if (LSA[mid] == ITEM) {
            LOC = mid;
            break;
        } else if (LSA[mid] < ITEM) { 
            LB = mid + 1;
        } else { 
            UB = mid - 1;
        }
    }

    
    if (LOC == -1) {
        cout << "The element was not found in the array." << endl;
    } else {
        cout << "The element you want to find is at index " << LOC << "." << endl;
    }

    return 0;
}
