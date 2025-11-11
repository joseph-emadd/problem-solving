#include<iostream>
#include<cmath>
using namespace std;
float ReadNumber (){
    float number;
    cout<<"Enter a number \n";
    cin>>number;
    return number;
}

float GetFractionPart (float number){
    int IntPart = (int) number;
    return number-IntPart;
}

int MyCeil (float number){
    int IntPart =(int) number;
    if(abs(GetFractionPart(number))>0){
        if(number>0)
        return ++IntPart;
        else
        return IntPart;
    }
    else
    return IntPart;
}

int main(){
    float number = ReadNumber();
    cout<<"My ceil result: "<<MyCeil(number)<<endl;
    cout<<"C++ Ceil result: "<<ceil(number)<<endl;  
    return 0; 
}