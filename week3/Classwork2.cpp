#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int adj;
  cout<<"Enter Adjacent of your triangle : "<<endl;
  cin>>adj;

  int opp;
cout<<"Enter Opposite of your triangle: "<<endl;
  cin>>opp;

int hyp = sqrt(pow(static_cast<double>(adj),2)+ pow(static_cast<double>(opp),2));
cout<<"The Hypoteneuse of your triangle is: "<<hyp<<endl;





}