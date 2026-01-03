#include <iostream>
using namespace std;



bool verifyPin(int correctPin){
int attempt = 1;
while(attempt<=3){
    cout<<"Enter your pin :"<<endl;
    int input;
    cin>>input;
    if(input==correctPin){
    return true;
    }
attempt++;
}




   return false;
}


void displayMenu(){

cout<<"=======ATM MENU======"<<endl;
    cout<<"1.View Balance"<<endl;
    cout<<"2.Deposit Cash"<<endl;
    cout<<"3.Withdraw Cash"<<endl;
    cout<<"4.Rest PIN"<<endl;
    cout<<"5.Exit"<<endl;
    cout<<"Enter choice(1-5)"<<endl;

}


double viewbalance(double balance){
   cout<<"The account balance is : "<<balance<<endl;

return balance;

}

double depositMoney(double balance){
   cout<<"Enter your deposit amount: "<<endl;
    int depositamount;
   cin>>depositamount;
   return depositamount+=balance;


    


}

double withdrawMoney(double balance,double dailyLimit){
   cout<<"How much do you want to withdrawal :NGN"<<endl;
    int withdrawal;
   cin>>withdrawal;



     if(withdrawal>balance || withdrawal>dailyLimit){
        cout<<"You cant withdrawal,please go else where"<<endl;
        return balance;
     } 

     return balance-=withdrawal;

}


int resetPin(int currentPin){
    cout<<"Enter oldPin please: "<<endl;
    int oldpin;
  cin>>oldpin;

  if(oldpin==currentPin){

  cout<<"Enter NewPin please: "<<endl;
  int newpin;
  cin >> newpin;
 

  return newpin;
  }
  else{
   return currentPin;
  }

}



int main(){
int AccountBalance=50000;
int Daily_withdrawal_limit=20000;
int User_Pin=4321;

bool isverified=verifyPin(User_Pin);
if(!isverified){
    cout<<"Account Locked. Please contact your bank."<<endl;
    return 0;
}

bool hasexited=false;
do{

    displayMenu();
    
    int menuoption;
   cin>>menuoption;


switch(menuoption){
case 1:
  viewbalance(AccountBalance);
  break;

  case 2:

   AccountBalance = depositMoney(AccountBalance);
    
 break;

 case 3:

 AccountBalance = withdrawMoney(AccountBalance,Daily_withdrawal_limit);
   

  break;

  case 4:

  resetPin(User_Pin);
  
  break;

  case 5:
  cout<<"Thank you for using our ATM"<<endl;;

  return 0;

  default:
  cout<<"INVALID OPTION TRY AGAIN"<<endl;

}


}while(!hasexited);
}






