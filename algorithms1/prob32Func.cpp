#include<iostream>
#include<cmath>
using namespace std;
float power (float num , float m)
{
    return pow(num,m);
}
int main(){
    float number ,m;
    cout<<"Please enter the number \n";
    cin>>number;
    cout<<"Please enter the power \n";
    cin>>m;
    cout<<number<<"^"<<m<<"= "<<power(number,m);
    return 0;
}