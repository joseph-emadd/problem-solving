#include <iostream>  
#include<cmath>
using namespace std;
float ReadTotalSales (){
    float totalsales;
    cout<<"enter the total sales \n";
    cin>>totalsales;
    return totalsales;
}
float CalcComissionPercentage (float totalsales){
    if(totalsales>=1000000)
    return 0.01;
    else if(totalsales>=500000)
    return 0.02;
    else if(totalsales>=100000)
    return 0.03;
    else if(totalsales>=50000)
    return 0.05;
    else
    return 0.0;
}
float CalcTotalComission(float totalsales){
    return totalsales*CalcComissionPercentage(totalsales);
}
int main(){
    cout<<CalcTotalComission(ReadTotalSales());
    
    return 0;  
}