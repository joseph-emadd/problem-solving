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
int ReverseNumber (int number){
    int remainder=0 , reverse=0;
    while(number>0){
        remainder=number%10;
        number=number/10;
        reverse=reverse*10+remainder;
    }
    return reverse;
}
void PrintDigits (int number){
    int remainder=0;
    while(number>0){
        remainder=number%10;
        number=number/10;
        cout<<remainder<<endl;
    }
}
int main(){
   PrintDigits(ReverseNumber(ReadPositiveNumber("Enter a Positive number")));
   return 0;
}