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
float CalcTotalSales(float BillValue){
    float totalbill= BillValue*1.1;
    totalbill=totalbill*1.16;
    return totalbill;
}
int main(){
    float BillVlue= ReadPositiveNumber("Enter the bill value ");
    cout<<"The total bill after service fees and sales tax= "<<CalcTotalSales(BillVlue);
    return 0;  
}