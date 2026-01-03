#include <iostream>
using namespace std;
  void readArray(int list[],int size){

    for(int i = 0;i<=size-1;i++){


        cout<<"enter the number at index"<<i<<"===>";
        cin>>list[i];

        cout<<"\n";
    }
  }
  void nPrintArray(int list[],int size){

    for (int i=0; i<=size-1;i++){
        cout<<list[i]<<endl;
    }

  }

int main(){
    int arr[50];
int size = sizeof(arr)/ sizeof (arr [0]);
int size;
cout<<"enter the size of the array ニニニニニ>";
cin>> size;
readArray (arr, size); nPrintArray (arr, size);




for(int i = 0;i<=size-1;i++){

    cin>>arr[i];
}
readArray(arr,size);
nPrintArray(arr,size);


}

