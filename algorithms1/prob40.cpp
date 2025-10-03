#include<iostream>
using namespace std;
int main(){
    float billvalue;
    cout<<"Please Enter the bill value \n";
    cin>>billvalue;
    float totalbill=billvalue*1.1;
    totalbill=totalbill*1.16;
    cout<<"The total bill = "<<totalbill<<endl;
    return 0;
}