//Bubble Sort
#include<iostream>
using namespace std;

void print(int Arr[],int Size){
  for (int i = 0; i < Size; i++)
  {
    cout<<Arr[i]<<" ";
  }
  cout<<endl;
}
void swap(int &a,int &b ){
  int temp= a;
  a=b;
  b=temp;
}
void BubbleSort(int Arr[],int size){
  int i,j,flag;
  for ( i = 0; i < size; i++)
  {
    flag=0;
    for ( j = 1; j < size; j++)
    {
      if (Arr[j-1]>Arr[j])
      {
       swap(Arr[j-1],Arr[j]);
       flag++;
      }
      
    }
    if (flag==0)
    {
      break;
    }
    
  }
  

}
int main(){
   int arr[]={99,85,74,35,14,57,38,94,12,65},N;
   N = sizeof(arr) / sizeof(arr[0]);
   
       cout << "Unsorted Array: ";
    print(arr,N);
    BubbleSort(arr,N);
      cout << "Sorted Array: ";
    print(arr,N);

    return 0;
}