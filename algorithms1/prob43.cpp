#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int totalseconds, remainder ;
    int days, hours, minutes, seconds;
    cout<<"Enter the total seconds \n";
    cin>>totalseconds;
    days=floor(totalseconds/(60*60*24));
    remainder=totalseconds%(60*60*24);
     hours= floor(remainder/(60*60));
     remainder=remainder%(60*60);
     minutes= floor(remainder/(60));
     remainder=remainder%(60);
     seconds=remainder;
     cout<<round(days)<<":"<<round(hours)<<":"<<round(minutes)<<":"<<round(seconds)<<endl;
    return 0;
}