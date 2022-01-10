/*6. 4.16 (Salary Calculator) Develop a C++ program that uses a while 
statement to determine the gross pay for each of several employees. 
The company pays “straight time” for the first 40 hours worked by each 
employee and pays “time-and-a-half” for all hours worked in excess of 
40 hours.( c++ how to program )*/
#include <iostream>
using namespace std ;

int main (){

int hours(0);

cout << "\nEnter hours worked (-1 to end): " ;
cin >> hours ;

while(hours!= -1 ){

    double rate(0) , salary(0) ;
    int overTime(0);
    if(hours<=40){
    cout << "Enter hourly rate of the employee ($00.00): ";
    cin >> rate ;
    salary = hours * rate ;
    cout << "Salary is $"<<salary;
    }

    else{
        cout << "Enter hourly rate of the employee ($00.00): ";
        cin >> rate ;
        overTime = (hours-40) * (rate * 1.5) ;
        salary = (40*rate) + overTime ;
        cout << "Salary is $"<<salary;
    }

    cout << "\nEnter hours worked (-1 to end): " ;
    cin >> hours ;

}
}