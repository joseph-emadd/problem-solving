#include<iostream>
using namespace std;
int main(){
    float totalBill , cashpaid , remainder;
    cout<<"Enter the total bill \n";
    cin>>totalBill;
    cout<<"Enter the cash paid \n";
    cin>>cashpaid;
    remainder=cashpaid-totalBill;
    cout<<"The remainder that give to the customer = "<<remainder<<endl;
    return 0;
}