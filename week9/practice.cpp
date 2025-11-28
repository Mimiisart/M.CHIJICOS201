#include <iostream>
using namespace std;

//transverse means visiting each of the elements one by one using the length

int main(){
    const int size = 5;

    int arr[size]= {1,3,4,5,6};
  int sum =0;

   int length = sizeof(arr)/sizeof(arr[0]);

   cout<<length;

    for (int i=0;i<=size-1;i++){

       
       sum+=arr[i];

        
    }

 cout<<sum<<"\n";

}