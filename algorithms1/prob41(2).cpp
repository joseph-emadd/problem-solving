#include <iostream>  
using namespace std;
float ReadPositiveNumber (string message){
    float num;
    do{
        cout<<message<<endl;
        cin>>num;
    }while(num<=0);
    return num;
}
float HoursToDays (float NumberOfHours){
    return NumberOfHours/24;
}
float HoursToWeeks (float NumberOfHours){
    return NumberOfHours/24/7;
}
int main(){
    float NumberOfHours =ReadPositiveNumber("Enter the total hours ");
    cout<<"Number of Hours= "<<NumberOfHours<<endl;
    cout<<"Number of Days= "<<HoursToDays(NumberOfHours)<<endl;
    cout<<"Number of Weeks= "<<HoursToWeeks(NumberOfHours)<<endl;

    return 0;  
}