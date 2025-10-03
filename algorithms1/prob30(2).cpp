#include <iostream>  
#include<cmath>
using namespace std;
enum enPositiveOrNegative {positive=1 , negative=2};
int ReadNumber (){
    int num;
    cout<<"Enter the number to calculate the factorial \n";
    cin>>num;
    return num;
}
enPositiveOrNegative CheckPositiveOrNegative (int num){
    if(num>0)
        return enPositiveOrNegative::positive;
    else
        return enPositiveOrNegative::negative;
}
int CalculateFactorial (int num){
    int factorial= 1;
    while(CheckPositiveOrNegative(num)==enPositiveOrNegative::negative){
        cout<<"Enter positive number please \n";
        ReadNumber();
    }
    for(int i=num ; i>1 ; i-- ){
        factorial*=i;
    }
    return factorial;
}
int main(){
    cout<<CalculateFactorial(ReadNumber());
    return 0;  
}