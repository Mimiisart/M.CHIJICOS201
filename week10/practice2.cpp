//FILE HANDLING IN C++
//find max and min
#include <iostream>
#include <fstream>
using namespace std;

int main(){
ifstream infile("data.txt");

if(!infile){
    cout<<"File cannot be open";
    return 0;



}



int number;
int sum=0;


while(infile>>number){
    cout<<number<<endl;
    sum +=number;

}cout<<"the sum is "<<sum;


infile.close();
}