#include <iostream>

using namespace std;

int main()
{
srand(time(0));

int T=rand() % 10;
int M=rand() % 10;

if(T<M){
  int temp = T;
     T= M;
     M = temp;
 

}
for(int i =0;i<5 ;i++){
int inputanswer;
int realanswer = T - M;
cout<<"What is "<<T<<"-"<<M<<endl;
cin>>inputanswer;

if(inputanswer == realanswer){
    cout<<"You are correct"<<endl;
    break;

}

else{
    cout<<"You are wrong"<<endl;
}

}



}