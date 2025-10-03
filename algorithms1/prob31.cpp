#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number please \n";
    cin>>number;
    cout<<"the number^2 = "<<round(pow(number,2))<<endl;
    cout<<"the number^3 = "<<round(pow(number,3))<<endl;
    cout<<"the number^4 = "<<round(pow(number,4))<<endl;
    return 0;
}