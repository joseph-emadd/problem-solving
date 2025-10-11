#include <iostream>  
#include<cmath>
using namespace std;
enum enNumberType {prime=1 , notprime=2};
int ReadPositiveNumber(){
    int num;
    do{
        cout<<"Please enter positive number \n";
        cin>>num;
    }while(num<=0);
    return num;
}
enNumberType CheckPrime (int num){
    int m=round(num/2);
    for(int counter=2 ;counter<=m ; counter++ ){
        if(num%counter==0){
            return enNumberType::notprime;
        }
    }
    return enNumberType::prime;
}
void PrintnumberType (int num){
    if(CheckPrime(num)==enNumberType::prime)
    cout<<"Prime Number \n";
    else
    cout<<"Not Prime number \n";
}
int main(){
    PrintnumberType(ReadPositiveNumber());
    

    return 0;  
}