#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &arr, int st, int end){
    int index=st-1;
    int pivot = arr[end];
    for (int i = st; i < end; i++)
    {
        if (arr[i]<=pivot)
        {
            index++;
            swap(arr[i],arr[index]);
        }
        
    }
   index++;
   swap(arr[end],arr[index]);
return index;
}
void QuickSort(vector<int> &arr, int st, int end){
    if (st < end)
    {
         int pivotIndex = partition(arr,st,end);
         QuickSort(arr,st,pivotIndex-1);
         QuickSort(arr,pivotIndex+1,end);
    }
    
}

int main(){
    vector<int> arr ={5,2,9,1,6,4,11,3};
     cout << "Unsorted Array: \n";
    for(int val :arr){
        cout<< val <<" ";
    }
    cout <<endl;


    QuickSort(arr,0,arr.size() - 1);

     cout << "sorted Array: \n";

   for(int val :arr){//this is called range loop it works like for loop
        cout<< val <<" ";
    
   }
   /*same as for loop
   for (int i=0;i<arr.size();i++){
     int val=arr[i];
    cout << val<<" ";
   }*/
    cout <<endl;



    return 0;
}