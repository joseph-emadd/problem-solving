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
float ClacNumberOfMonths (float LoanAmount, float MonthlyPayment){
    return LoanAmount/MonthlyPayment;

}
int main(){
    float LoanAmount = ReadPositiveNumber("Enter the Loan Amount");
    float MonthlyPayment = ReadPositiveNumber("Enter the Monthly Payment as you like");
    cout<<"The number of Months = "<<ClacNumberOfMonths(LoanAmount,MonthlyPayment)<<" Months ";

    return 0;  
}