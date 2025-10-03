#include<iostream>
using namespace std;
enum enday {sunday=1, monday=2, tuesday=3, wednesday=4, thursday=5, friday=6, saturday=7};
void printChooseDay()
{
    cout<<"Please choose day of week \n";
    cout<<"1-sunday \n";
    cout<<"2-Monday \n";
    cout<<"3-Tuesday \n";
    cout<<"4-Wednesday \n";
    cout<<"5-thursday \n";
    cout<<"6-friday \n";
    cout<<"7-sunday \n";
    cout<<"******************************** \n";
}
enday readday()
{
    int x;
    cin>>x;
    return (enday) x;
}
string printday(enday day)
{
    switch(day){
        case enday::sunday:
        return "Sunday";
        break;
        case enday::monday:
        return "monday";
        break;
        case enday::tuesday:
        return "tuesday";
        break;
        case enday::wednesday:
        return "wednesday";
        break;
        case enday::thursday:
        return "thursday";
        break;
        case enday::friday:
        return "friday";
        break;
        case enday::saturday:
        return "saturday";
        break;
        default:
        return "invalid";
    }
}
int main(){
    printChooseDay();
    cout<<"The day is "<<printday(readday());
    return 0;
}