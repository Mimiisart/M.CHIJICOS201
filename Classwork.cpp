#include <iostream>

using namespace std;

int main()
{
    int integer;
    cout<<"Enter Integer: "<<endl;
    cin >>integer;
        if (integer % 5 ==0){
            cout<<"HiFive"<<endl;
        
        }
        else if(integer % 2 ==0){
            cout<<"HiEven"<<endl;
        }
        else{
            cout<<"This integer is neither a multiple of 5 nor even";
        }
    }
