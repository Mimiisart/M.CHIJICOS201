#include "iostream"

using namespace std;

int main(){
    srand(time(0));

    int num1= rand() % 10;
    int num2= rand() % 10;

    if(num1<num2){
        int temp = num1;
        num1 = num2;
        num2= temp;


         
    }
 while(true){
    int answer;
    int diff= num1 - num2;

    cout<<"What is "<<num1<<"-"<<num2<<endl;
    cin>>answer;

    if (answer==diff){

        cout<<"You are correct";
        break;
}

    else{
        cout<<"WRONG ,please try again"<<endl;
    }





}
}