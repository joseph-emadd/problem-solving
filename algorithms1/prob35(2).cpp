#include <iostream>  
#include<cmath>
using namespace std;
struct stCoins {
    float pennies;
    float nickels;
    float dimes;
    float quarters;
    float dollars;
};
stCoins ReadCoins (){
    stCoins coins;
    cout<<"Enter the total pennies \n";
    cin>>coins.pennies;
    cout<<"Enter the total nickels \n";
    cin>>coins.nickels;
    cout<<"Enter the total dimes \n";
    cin>>coins.dimes;
    cout<<"Enter the total quarters \n";
    cin>>coins.quarters;
    cout<<"Enter the total dollars \n";
    cin>>coins.dollars;
    return coins;
}
float CalcTotalPennies (stCoins coins){
    float totalpennies ;
    totalpennies=coins.pennies+coins.nickels*5 + coins.dimes*10 + coins.quarters*25 + coins.dollars*100;
    return totalpennies;
}
int main(){
    stCoins coins=ReadCoins();
    cout<<"The total pennies = "<<CalcTotalPennies(coins)<<endl;
    cout<<"The total Dollars = "<<CalcTotalPennies(coins) /100.0;
    return 0;  
}