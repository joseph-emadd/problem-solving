#include <iostream>  
#include<cmath>
using namespace std;
enum enNumberType {Prime=1 , NotPrime=2};
int ReadPositiveNumber(string message){
    int number;
    do{
        cout<<message<<endl;
        cin>>number;
    }while(number<=0);
    return number;
}
enNumberType CheckPrime (int number){
    int m=round(number/2);
    for(int i=2 ;i<=m ; i++){
        if(number%i==0)
        return enNumberType::NotPrime;
    }
    return enNumberType::Prime;
}
void PrintPRimeFrom1ToN (int number){
    cout<<"\nPrime Numbers From 1"<<" To "<<number<<" are: "<<endl;
    for(int i=1 ; i<=number ; i++){
        if(CheckPrime(i)==enNumberType::Prime)
        cout<<i<<endl;
    }
}
int main(){
    PrintPRimeFrom1ToN(ReadPositiveNumber("Please enter a positive number to print prime numbers from 1 to N"));
    
    return 0;  
}