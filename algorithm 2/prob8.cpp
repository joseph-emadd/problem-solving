#include<iostream>
using namespace std;
int ReadPositiveNumber(string message){
    int number;
    do{
        cout<<message<<endl;
        cin>>number;
    }while(number<=0);
    return number;
}
int DigitFrequency (int Number ,int Digit){
    int remainder=0 , frequency=0;
    while(Number>0){
        remainder=Number%10;
        Number=Number/10;
        if(remainder==Digit)
        frequency++;
    }
    return frequency;
}
int main(){
    int Number=ReadPositiveNumber("Enter a Positive number");
    int Digit= ReadPositiveNumber("Enter a digit");
    cout<<"Digit "<<Digit<<" Frequency is "<<DigitFrequency(Number,Digit)<<" Time(s)\n";
    
    return 0;
}