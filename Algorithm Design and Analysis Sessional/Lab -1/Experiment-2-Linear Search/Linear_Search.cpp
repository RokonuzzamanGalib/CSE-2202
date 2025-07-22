#include<iostream>
using namespace std;

int main(){
   int LA[]={99,85,74,35,14,57,38,94,12,65},N,item;
   N = sizeof(LA) / sizeof(LA[0]);
      cout<<"The Given Array :" <<endl;

   for(int i=0; i< N ;i++){
    cout<< LA[i]<<" ";
   }

   cout<<" \n";

   cout<<"Please enter the element you want to find ";
   cin>>item;
   int flag =0;

   for (int i = 0; i < N; i++)
   { 
     

     if (LA[i]==item)
      {
         cout<<"The element found at index "<<i<<endl;
         flag = 1;
      }
    
   }

   if (flag==0)
   {
    cout<<"The element not found in the array "<<endl;
   }
   

    return 0;
}