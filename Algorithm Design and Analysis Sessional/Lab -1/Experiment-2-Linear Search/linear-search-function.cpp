#include<iostream>
using namespace std;

void print(int Arr[],int size){
    cout<<"The Given Array : " ;
    for (int i = 0; i < size; i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<endl;
}

void LinearSearch(int Arr[],int size,int item){
int i=0;
Arr[size]=item;
while (Arr[i]!=item)
{
    i++;
}
if (i==size)
{
     cout<<item<<" not found in the array "<<endl;
}
else{
     cout<<item<<" found at index "<<i<<endl;
}
}

int main(){
   int LA[]={99,85,74,35,14,57,38,94,12,65},N,item;
   N = sizeof(LA) / sizeof(LA[0]);
   print(LA,N);
     
   cout<<"Please enter the element you want to find ";
   cin>>item;
   LinearSearch(LA,N,item);

    return 0;
}