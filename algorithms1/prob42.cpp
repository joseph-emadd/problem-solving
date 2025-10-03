#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int days, hours , minutes , seconds;
    int totalSeconds;
    cout<<"Enter the time duration of a task in days, hours, minutes, seconds \n ";
    cin>>days>>hours>>minutes>>seconds;
    totalSeconds=days*24*60*60 + hours*60*60 + minutes*60 + seconds;
    cout<<"The total seconds of the task = "<<round(totalSeconds)<<endl;
    return 0;
}