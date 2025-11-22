#include <iostream>
using namespace std ;

int main(){
    srand(time(0));

    int number_1= rand();
    int number_2=rand();
    

    if(number_1 > number_2){
        int temp=number_1;
    int number_1=number_2;
    int number_2=temp;
    }
    int diff= (number_1- number_2) % 10;
 
     cout<<"What is number_1 - number_2"<<endl;
   int Enter;
   cin>>Enter;
   if(Enter==diff){
    cout<<"CORRECT GUESS"<<endl;

   } 
   else{
    cout<<"Wrong guess ,please try again"<<endl;
   }
}