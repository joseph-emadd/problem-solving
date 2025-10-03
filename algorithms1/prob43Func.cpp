#include<iostream>
#include<cmath>
using namespace std;
void clock (int totalseconds)
{
    int days, hours, minutes, seconds;
    int remainder;
    days=floor(totalseconds/(24*60*60));
    remainder=totalseconds%(24*60*60);
    hours=floor(remainder/(60*60));
    remainder=remainder%(60*60);
    minutes=floor(remainder/(60));
    remainder=remainder%(60);
    seconds=remainder;
    cout<<days<<":"<<hours<<":"<<minutes<<":"<<seconds;
}

int main(){
    int totalseconds;
    cout<<"please enter the total seconds \n";
    cin>>totalseconds;
    clock(totalseconds);
    return 0;
}