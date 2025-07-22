//MergeSort
#include<iostream>
#include<vector>
using namespace std;


void merge(vector<int> &arr,int st,int mid,int end){
    vector<int> temp;
    int i = st;
    int j = mid+1;

    while (i <=mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    
    while (i <= mid ) {
        temp.push_back(arr[i]);
        i++;
    }
     while (j <= end ) {
        temp.push_back(arr[j]);
        j++;
    }
    
    for(int index=0;index<temp.size();index++){
        arr[index+st]=temp[index];
    }
}

void mergesort(vector<int> &arr,int st,int end){
    if(st<end){
        int mid=st+((end-st)/2);
        mergesort(arr,st,mid);//for first part
        mergesort(arr,mid+1,end);//for last part

        merge(arr,st,mid,end);
    }
}

int main(){
    vector<int> arr ={5,2,9,1,6,4,11,3};
     cout << "Unsorted Array: \n";
    for(int val :arr){
        cout<< val <<" ";
    }
    cout<<"\n ";
    mergesort(arr,0,arr.size()-1);
      cout << "sorted Array: \n";
    for(int val :arr){
        cout<< val <<" ";
    }
    cout<<" ";
    return 0;
}