#include <iostream>  
using namespace std;
float ReadPositiveNumber (string message){
    float num;
    do{
        cout<<message<<endl;
        cin>>num;
    }while(num<0);
    return num;
}
float CalculateRemainder (float TotalBill , float CashPaid){
    return CashPaid-TotalBill;
}
int main(){
    float TotalBill = ReadPositiveNumber("Enter the total bill ");
    float CashPaid = ReadPositiveNumber("Enter the cash paid ");
    cout<<"The Remainder= "<<CalculateRemainder(TotalBill,CashPaid);
    return 0;  
}