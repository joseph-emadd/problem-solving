#include <iostream>  
using namespace std;
enum enMonthOfYear {January=1 , February =2 , March=3 , April =4 , May=5 , June=6 , July=7 , August =8 , 
September =9 , October=10 , November =11 ,December =12 };

int ReadNumberInRange (string message , int from , int to){
    int number;
    do{
        cout<<message<<endl;
        cin>>number;
    }while(number<from || number>to);
    return number;
}
enMonthOfYear CheckMonthOfYear (){
    return (enMonthOfYear) ReadNumberInRange("Enter Number Form 1 To 12 to print the month ", 1 , 12);
}
string PrintMonthOYear (enMonthOfYear MonthOfYear){
    switch(MonthOfYear){
        case enMonthOfYear::January :
        return "January";
        case enMonthOfYear::February :
        return "February";
        case enMonthOfYear::March :
        return "March";
        case enMonthOfYear::April :
        return "April";
        case enMonthOfYear::May :
        return "May";
        case enMonthOfYear::June :
        return "June";
        case enMonthOfYear::July :
        return "July";
        case enMonthOfYear::August :
        return "August";
        case enMonthOfYear::September :
        return "September";
        case enMonthOfYear::October :
        return "October";
        case enMonthOfYear::November :
        return "November";
        case enMonthOfYear::December :
        return "December";
    }
}
int main(){
    cout<<PrintMonthOYear(CheckMonthOfYear());
    
    
    return 0;  
}