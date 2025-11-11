#include<iostream>
#include<cmath>
using namespace std;

float ReadNumber (){
    float number;
    cout<<"Please Enter a Number:\n";
    cin>>number;
    return number;
}

int MyFloor (float number){
    int IntPart;
    IntPart= (int)number;
    if(number>0)
    return IntPart;
    else
    return --IntPart;
}

int main(){
    float number= ReadNumber();
    cout<<"My floor Result: "<<MyFloor(number)<<endl;
    cout<<"C++ floor result: "<<floor(number);

    return 0;
}