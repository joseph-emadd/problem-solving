#include<iostream>
#include<cmath>
using namespace std;
float ReadNumber (){
    float number;
    cout<<"Please Enter a Number:\n";
    cin>>number;
    return number;
}

float MyABS (float number){
    if(number<0){
        return -1*number;
    }
    else{
        return number;
    }
}


int main(){
    float number= ReadNumber();
    cout<<"\nMay abs result: "<<MyABS(number)<<endl;
    cout<<"C++ abs result: "<<abs(number)<<endl;

    return 0;
}