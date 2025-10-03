#include<iostream>
using namespace std;
float calcTotalSeconds (float days ,float hours, float minutes , float seconds)
{
    
    float totalSeconds=days*24*60*60 +hours*60*60 +minutes*60 +seconds;
    return totalSeconds;
}
void inputNumbers (float &days ,float &hours, float &minutes , float &seconds)
{
    cout<<"Enter the number of days \n";
    cin>>days;
    cout<<"Enter the number of hours \n";
    cin>>hours;
    cout<<"Enter the number of minutes \n";
    cin>>minutes;
    cout<<"Enter the number of seconds \n";
    cin>>seconds;
}
int main(){
    float days ,hours,  minutes ,  seconds;
    inputNumbers(days,hours,minutes,seconds);
    cout<<"The total seconds = "<<calcTotalSeconds(days,hours,minutes,seconds);
    return 0;
}