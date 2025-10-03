//problem 34
#include<iostream>
using namespace std;
float TotalComission (float TotalSales)
{
    float percentage;
    if(TotalSales>=1000000){
        percentage=0.01;
    }
    else if(TotalSales>=500000){
        percentage=0.02;
    }
    else if(TotalSales>=100000){
        percentage=0.03;
    }
    else if(TotalSales>=50000){
        percentage=0.05;
    }
    else{
        percentage=0;
    }
    float totalcomission=percentage*TotalSales;
    return totalcomission;
}
int main(){
    float TotalSales;
    cout<<"Enter your total sales \n";
    cin>>TotalSales;
    cout<<"Your comission is "<<TotalComission(TotalSales);
    return 0;
}