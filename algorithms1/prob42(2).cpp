#include <iostream>  
using namespace std;
struct stTaskDuration{
    float days , hours, minutes , seconds;
};
float ReadPositiveNumber  (string message){
    float num;
    do{
        cout<<message<<endl;
        cin>>num;
    }while(num<=0);
    return num;
}
stTaskDuration ReadTaskDuration (){
    stTaskDuration TaskDuration;
    TaskDuration.days=ReadPositiveNumber("Enter the number of days ");
    TaskDuration.hours=ReadPositiveNumber("Enter the number of hours");
    TaskDuration.minutes=ReadPositiveNumber("Enter the number of minutes");
    TaskDuration.seconds=ReadPositiveNumber("Enter the number of seconds");
    return TaskDuration;
}
float CalcTotalSeconds (stTaskDuration TaskDuration){
    float TotalSeconds ;
    TotalSeconds= TaskDuration.seconds + TaskDuration.minutes*60 +
    TaskDuration.hours*60*60 + TaskDuration.days*24*60*60;
    return TotalSeconds;
}
int main(){
    stTaskDuration TaskDuration = ReadTaskDuration();
    cout<<"The Task Duration in seconds = "<<CalcTotalSeconds(TaskDuration);
    return 0;  
}