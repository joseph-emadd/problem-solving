#include<iostream>
#include<cmath>
using namespace std;
void power (float number)
{
    cout<<"Enter your number \n";
    cin>>number;
    cout<<number<<"^2 ="<<pow(number,2)<<endl;
    cout<<number<<"^3 ="<<pow(number,3)<<endl;
    cout<<number<<"^4 ="<<pow(number,4)<<endl;
}
int main(){
   float number;
   power(number);
    return 0;
}