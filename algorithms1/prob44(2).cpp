#include <iostream>  
using namespace std;
enum enDayOfWeek {sunday=1 , monday=2 , tuesday=3 , wednesday=4 , thursday=5 , friday=6 , saturday=7 };
int ReadNumberInRange (int from , int to){
    int num;
    do{
        cout<<"Enter number from "<<from<<" to "<<to<<endl;
        cin>>num;
    }while(!(num>=from && num<=to));
    return num;
}
enDayOfWeek CheckDayOfWeek (){
    return (enDayOfWeek) ReadNumberInRange(1,7);
}
string PrintDayOfWeek (enDayOfWeek Day){
    switch(Day){
        case enDayOfWeek::saturday :
        return "Saturday";
        case enDayOfWeek::sunday :
        return "Sunday";
        case enDayOfWeek::monday :
        return "Monday";
        case enDayOfWeek::tuesday :
        return "Tuesday";
        case enDayOfWeek::wednesday :
        return "Wednesday";
        case enDayOfWeek::thursday :
        return "Thursday";
        case enDayOfWeek::friday :
        return "Friday";
    }
}
int main(){
    cout<<PrintDayOfWeek(CheckDayOfWeek());
    
    return 0;  
}