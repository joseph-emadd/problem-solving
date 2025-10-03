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
void PrintResult (int n){
    int sum=0;
    int i=0;
    while(i<n){
        i++;
        if(CheckNumberType(i)==enNumberType::odd){
            sum+=i;
            
        }
        
    }
    cout<<sum;
}
int main(){
    PrintResult(ReadNumber());
    return 0;  
}