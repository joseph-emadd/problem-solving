#include <iostream>  
#include<cmath>
using namespace std;
struct stTaskDuration {
    int days, hours, minutes, seconds;
};
int ReadPositiveNumber(string message){
    int num;
    do{
        cout<<message<<endl;
        cin>>num;
    }while(num<=0);
    return num;
}
stTaskDuration CalcTaskDuration (int TotalSeconds){
    int remainder;
    stTaskDuration TaskDuration;
    TaskDuration.days= floor(TotalSeconds/(60*60*24));
    remainder=TotalSeconds%(60*60*24);
    TaskDuration.hours= floor(remainder/(60*60));
    remainder= remainder%(60*60);
    TaskDuration.minutes= floor(remainder/60);
    remainder=remainder%60;
    TaskDuration.seconds=remainder; 
    return TaskDuration;
}
void PrintTaskDuration (stTaskDuration TaskDuration){
    cout<<"The Total Task Duration is "<<
    TaskDuration.days<<" : "<<TaskDuration.hours<<" : "<<TaskDuration.minutes<<" : "<<TaskDuration.seconds<<endl;
}
int main(){
    int TotalSeconds= ReadPositiveNumber("Enter the total Seconds");
    PrintTaskDuration(CalcTaskDuration(TotalSeconds));
    
    return 0;  
}