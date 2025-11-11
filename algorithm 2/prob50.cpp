#include<iostream>
#include<cmath>
using namespace std;
float ReadNumber (){
    float number;
    cout<<"Enter a number \n";
    cin>>number;
    return number;
}


float MySqrt (float root){
    return pow(root,0.5);
}

int main(){
    float number = ReadNumber();
    cout<<"My sqrt result: "<<MySqrt(number)<<endl;
    cout<<"C++ sqrt result: "<<sqrt(number)<<endl;  
    return 0; 
}