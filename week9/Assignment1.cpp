#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "Enter your full name please" << endl;
    getline(cin, name);

    int jambscore;
    do
    {
        cout << "Enter your jamb score" << endl;
        cin >> jambscore;
        if (jambscore > 400 || jambscore < 0)
        {
            cout << "Invalid jamb score. Try again" << endl;
        }
    } while (jambscore > 400 || jambscore < 0);

    double waecaverage;

    do
    {
        cout << "Enter your waecaverage score" << endl;
        cin >> waecaverage;

        if (waecaverage > 100 || waecaverage < 0)
        {

            cout << "Invalid waecaverage score. Try again" << endl;
        }
    } while (waecaverage > 100 || waecaverage < 0);

    int Age;
    cout << "Enter your Age in years" << endl;
    cin >> Age;

    bool isPaufirstchoice;

    cout << "Is Pau your first choice ,input 1 for yes and 0 for no" << endl;
    cin >> isPaufirstchoice;

    bool hasDisciplinaryrecords;

    cout << "Do you have any disciplinary records ,input 1 for yes and 0 for no" << endl;
    cin >> hasDisciplinaryrecords;

    int hosteloption;
    cout << "S/N | Hostel           | Price (N)" << endl;
    cout << "1   | Main Hostel      | 180,000 " << endl;
    cout << "2   | Annex Hostel     | 120,000 " << endl;
    cout << "3   | Day Student      | 0.00 " << endl;

    cout << "Which hostel would you prefer: choose by input 1-3" << endl;
    cin >> hosteloption;

    string hostel;
    int hostelfee;
  
    switch (hosteloption)
    {
    case 1:
        hostel = " Main Hostel";
        hostelfee = 180000;
        break;

    case 2:
        hostel = " Annex Hostel";
        hostelfee = 120000;
        break;
    case 3:
        hostel = " Day student";
        hostelfee = 0.00;
        break;
    }

    const int Basetuition = 1500000;

    string admissionstatus;
      if (hasDisciplinaryrecords || Age < 15)
    
    {
         admissionstatus = "REJECT!!!";
    }
    else if (((jambscore >= 220 && waecaverage >= 60) && isPaufirstchoice) || (jambscore >= 200 && waecaverage >= 70))
    {
       admissionstatus = "admitted";
    }

    else
    {
        admissionstatus = "Pending";
    }

    int scholarshippercent = 0;

    if (jambscore >= 320)
    {
        scholarshippercent = 30;
    }

    else if (jambscore >= 320)
    {
        scholarshippercent = 20;
    }

    else if (jambscore >= 240)
    {
        scholarshippercent = 10;
    }

    if (waecaverage >= 80 && isPaufirstchoice)
    {
        scholarshippercent += 5;
    }

    if (admissionstatus == "Pending" && hasDisciplinaryrecords)
    {
        hostel = "On Hold";
        hostelfee = 0;
    }
    else if (admissionstatus == "REJECT!!!")
    {
        hostel = "Not applicable";
        hostelfee = 0;
    }

    
    int tuitionafterscholarship=0;
    int totalpayable=0;
    int grant=0;
    int r =0;
   
if (admissionstatus=="admitted"){
    srand(time(0));

     r = rand()% 100 +1;

     bool isPrime= r==2 || r==3 || r==5 || r==7 || r==11 || r==13 ||r==17 || r==19 
               ||r==23|| r==29 ||r==31||r==37|| r==41||r==43||r==47||r==53||r==59
               ||r==61||r==67||r==71||r==73|| r==79||r==83||r==89||r==97;


   if(isPrime && r <=97 && admissionstatus=="admitted" ){
    grant=50000;

   }

    tuitionafterscholarship = Basetuition - (scholarshippercent*Basetuition/100);
   totalpayable = tuitionafterscholarship + hostelfee - grant;

}
if (totalpayable <0){
    totalpayable=0;
}
 

cout<<"Name :"<<name<<endl;
cout<<"Admission status :"<<admissionstatus<<endl;
cout<<"Scholarship :"<<scholarshippercent<<"%"<<" tuitionafterscholarship :NGN"<<tuitionafterscholarship<<endl;

cout<<"Hostel :"<<hostel<<" Hostel Fees :NGN"<<hostelfee<<endl;
cout<<"Random draw :"<<r<<"  Meritgrant :NGN"<<grant<<endl;

cout<<"TOTAL PAYABLE : NGN"<<totalpayable<<endl;


}
