#include<iostream>
#include<cmath>
using namespace std;

float ReadNumber (){
    float number;
    cout<<"Please Enter a Number:\n";
    cin>>number;
    return number;
}

float GetFractionPart (float number){
    return number- (int)number;
}

int MyRound (float number){
    int IntPart;
    IntPart= (int) number;
    float FractionPart = GetFractionPart(number);
    if(abs(FractionPart)>=.5){
        if(number>0)
        return ++IntPart;
        else
        return --IntPart;
    }
    else{
        return IntPart;
    }
}

int main(){
    float number= ReadNumber();
    cout<<"My Round Result: "<<MyRound(number)<<endl;
    cout<<"C++ round result: "<<round(number);

    return 0;
}