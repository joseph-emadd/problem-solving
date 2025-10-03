#include <iostream>  
#include<cmath>
using namespace std;
float ReadTotalSales (){
    float TotalSales;
    cout<<"Enter your total Sales \n";
    cin>>TotalSales;
    return TotalSales;
}
float CalcComission (float TotalSales){
    float percentage;
    if(TotalSales>=1000000)
    percentage=0.01;
    else if(TotalSales>=500000)
    percentage=0.02;
    else if(TotalSales>=100000)
    percentage=0.03;
    else if(TotalSales>=50000)
    percentage=0.05;
    else
    percentage=0.0;
    return percentage*TotalSales;
}
void PrintTotalComission (float TotalSales){
    cout<<"The total comission is "<<CalcComission(TotalSales);
}
int main(){
    PrintTotalComission(ReadTotalSales());

    return 0;  
}