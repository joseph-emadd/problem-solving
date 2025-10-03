#include <iostream>  
#include<cmath>
using namespace std;
enum enNumberType {even=1 , odd=2};
int ReadNumber (){
    int num;
    cout<<"Enter the number to sum odd numbers from 1 to this number \n";
    cin>>num;
    return num;
}
enNumberType CheckNumberType (int num){
    if(num%2==0)
    return enNumberType::even;
    else
    return enNumberType::odd;
}
int SumOddNumbersFrom1ToN (int n){
    int sum = 0;
    for(int i=1 ; i<=n ; i++){
        if(CheckNumberType(i)==enNumberType::odd){
            sum=sum+i;
        }
    }
return sum;
}
int main(){
    cout<<SumOddNumbersFrom1ToN(ReadNumber());
    return 0;  
}