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
int CountDigitFrequency (int number,int digit){
    int remainder=0, frequency=0;
    while(number>0){
        remainder=number%10;
        number=number/10;
        if(remainder==digit)
        frequency++;
    }
    return frequency;
}
void PrintAllDigitFrequency (int number){
    for(int i=0 ; i<10 ; i++){
        if(CountDigitFrequency(number,i)>0){
        cout<<"Digit "<<i<<" Frequency is "<<CountDigitFrequency(number,i)<<" Time(s)\n";
    }}
}
int main(){
    int number=ReadPositiveNumber("Enter a positive number");
    PrintAllDigitFrequency(number);
    return 0;
}