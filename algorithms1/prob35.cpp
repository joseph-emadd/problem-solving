#include<iostream>
using namespace std;
int main(){
    int penny ,nickel,dime, quarter, dollar ,sumpennies,sumdollars;

    cout<<"Please Enter number of pennies, nickels ,dimes , quarters and dollars \n";
    cin>>penny>>nickel>>dime>>quarter>>dollar;

    sumpennies=penny+ nickel*5 + dime*10 + quarter*25 + dollar*100;
    sumdollars=sumpennies/100;
    
    cout<<"The total pennies = "<<sumpennies<<endl<<"The total Dollars = "<<sumdollars<<endl;
    return 0;
}