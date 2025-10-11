#include <iostream>  
using namespace std;
float ReadPositiveNumber (string message){
    float num;
    do{
        cout<<message<<endl;
        cin>>num;
    }while(num<=0);
    return num;
}
float CalcMonthlyAmount ( float LoanAmount, float MonthsToSettleLoan){
    return LoanAmount/MonthsToSettleLoan;
}
int main(){
    float LoanAmount = ReadPositiveNumber("Enter the loan amount ");
    float MonthsToSettleLoan = ReadPositiveNumber("Enter the Number of months that you like to take");
    cout<<"The Monthly Installment Amount= "<<CalcMonthlyAmount(LoanAmount,MonthsToSettleLoan);
    return 0;  
}