#include <iostream>
using namespace std;

int main()
{
    string student_name;
    cout << "ENTER YOUR NAME PLEASE : ";
    getline(cin, student_name);

    bool PAU_student;
    cout << "Are you a PAU student? (1=true, 2=false): ";
    cin >> PAU_student;

    int course_option;

    cout << "S/N | Course          | Days | Registeration (N)" << endl;
    cout << "1   | Photography     | 3    | 10,000 " << endl;
    cout << "2   | Painting        | 5    | 8,000 " << endl;
    cout << "3   | Fish Farming    | 7    | 15,000 " << endl;
    cout << "4   | Baking          | 5    | 13,000 " << endl;
    cout << "5   | Public Speaking | 2    | 5,000 " << endl;
    cout << "Enter 1-5 to choose a course: " << endl;
    cin >> course_option;

    int location_option;
    cout << "" << endl;
    cout << "S/N | Location     | Lodging/Day(N) " << endl;
    cout << "1   | Camp House A | 10,000 " << endl;
    cout << "2   | Camp House B | 2,500 " << endl;
    cout << "3   | Camp House C | 5,000 " << endl;
    cout << "4   | Camp House D | 13,000 " << endl;
    cout << "5   | Camp House E | 5,000 " << endl;

    cout << "Enter 1-5 to choose a location: " << endl;
    cin >> location_option;

    int days_for_course;
    int regfee;
    int lodgingPerDay;

    switch(course_option){
    case 1:
        days_for_course = 3;
        regfee = 10000;
         break;

   
    case 2:
        days_for_course = 5;
        regfee = 8000;
        break;
    
    case 3:
        days_for_course = 7;
        regfee = 15000;
        break;
    case 4:
        days_for_course = 5;
        regfee = 13000;
         break;

    case 5:
    
        days_for_course = 2;
        regfee = 5000;
       break;

   default:
        cout << "INVALID INPUT" << endl;
       break;
    }

    switch (location_option)
    {
        case 1:
        lodgingPerDay = 10000;
    break;

    case 2:
        lodgingPerDay = 2500;
        break;
    case 3:
        lodgingPerDay = 5000;
        break;
    case 4:
        lodgingPerDay = 13000;
        break;
    
        case 5:
        lodgingPerDay = 5000;
        break;

   default:
        cout << "INVALID INPUT" << endl;

        break;
    }

    int lodgingCost = lodgingPerDay * days_for_course;
    int total = regfee + lodgingCost;

    cout << "Hey" << " " << student_name << " your total bill is : NGN" << total << endl;

    float discount1;
float discount2;


    if (PAU_student && (location_option== 2 || location_option == 3)){
        discount1 = (0.05)* total;
       cout<<"You 5% discounted price is:NGN"<< discount1<<endl;
    }
      
     
        if ((days_for_course >5) || (regfee > 12000)){
            discount2 =(0.03) * total;
            cout<<"You 3% discounted price is:NGN "<< discount2;
        }
         int promo;
          srand(time(0));
          int random_number = rand() % 100;
         if (random_number==7 || random_number== 77){
            promo= 500;
           
         }


          cout<<"RANDOM_NUMBER: "<<random_number<<endl;

       
        float discounted_total =total - promo - discount1-discount2;

     cout << "Name : "<< student_name << "(Pau student: ";


     if (PAU_student){
        cout<<"Yes)"<<endl;

     }

     else {
        cout<<"No)"<<endl;
     }

     cout << "Course name : "<< course_option << "Days: "<<days_for_course<<endl;
    cout << "Registration :NGN "<< regfee - discount1 - discount2 <<endl;
    cout << "Lodging: "<< lodgingPerDay << " x " << days_for_course << " = NGN" << lodgingCost << endl;

    cout<<"Random draw: "<<random_number<<",  Promo appplied: NGN"<<promo<<endl;


    cout<<"TOTAL : NGN"<<discounted_total;
}
