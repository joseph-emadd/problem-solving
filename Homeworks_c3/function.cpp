#include<iostream>
using namespace std;
void mySumProcedure()
{
    int num1,num2;
    cout<<"please enter number1 \n";
    cin>>num1;
    cout<<"please enter number2 \n";
    cin>>num2;
    cout<<"********************************* \n";
    cout<<num1*num2<<endl;
}
int mySumFunction()
{
    int num1,num2;
    cout<<"please enter number1 \n";
    cin>>num1;
    cout<<"please enter number2 \n";
    cin>>num2;
    cout<<"********************************* \n";
    return num1*num2;
}
int main(){
    mySumProcedure();
    cout<<mySumFunction();
    return 0;
}