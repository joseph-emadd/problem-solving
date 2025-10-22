#include <iostream>  
#include<string>
using namespace std;
int ReadPositiveNumber (string message){
    int number;
    do{
        cout<<message<<endl;
        cin>>number;
    }while(number<=0);
    return number;
}
int SumOfDigits (int number){
    int remainder=0;
    int sum=0;
    while(number>0){
        remainder=number%10;
        number=number/10;
        sum+=remainder;
    }
     return sum;
}
int main(){
    int number=ReadPositiveNumber("Enter a Positive Number To Calculate Its Digits");
    cout<<"\nThe Sum Of Digits= "<<SumOfDigits(number)<<endl;
    return 0;  
}