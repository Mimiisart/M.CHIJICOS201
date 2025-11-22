#include <iostream>

using namespace std;

int main()
{
    cout<<"What would like to convert celsius or fahrenheit? click 1 for celsius and 2 for fahrenheit: ";
 int convertion;

    cin>>convertion;
    if (convertion == 2 ){

float Fahrenheit;
cout<< "Enter value of temperature in Fahrenheit :"<< endl;
cin>>Fahrenheit;
float new_value_in_celsius= (5.0/9.0)*(Fahrenheit - 32.0);
cout <<"The temperature in celsius: " << new_value_in_celsius;






}

if (convertion == 1){

float Celsius;
cout<< "Enter value of temperature in Celsius :"<< endl;
cin>>Celsius;
float new_value_in_fahrenheit= (9.0/5.0)*(Celsius + 32.0);
cout <<"The temperature in fahrenheit: " << new_value_in_fahrenheit;






}



}