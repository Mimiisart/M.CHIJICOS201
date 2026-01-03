//FILE HANDLING IN C++
#include <iostream>
#include <fstream>
using namespace std;

int main(){
   // ofstream ===> write to a file (output)
   //ifstream ====> Read from a file(input)
//    fstream=====>Read and write

   ofstream outfile("data.txt");



   if(!outfile){
    cout<<"ERROR OPENING FILE";
    return 0;
   }

   outfile <<"Welcome to C++"<<endl;
   outfile<<"This is file handling class"<<endl;


   outfile.close();
   cout<<"Data written to file "<<endl;






   ifstream infile("data.txt");



   if(!infile){
    cout<<"CANNOT OPENING FILE";
    return 0;
   }

   string line;
   while(getline(infile, line)){

    cout<<line<<endl;
   }
 
   infile.close();



   //ios::out ===>write mode
   //ios::in ===> read mode
//    ios::app ==> append mode
// ios::trunc ====> erase file before writing
fstream file("data txt", ios::out | ios::app);

file<<"adding new line"<<endl;
file.close();

cout<<"DONE"<<endl;
}