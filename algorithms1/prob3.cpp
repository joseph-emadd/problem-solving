#include <iostream>
using namespace std;
enum enNumberType {even=1 , odd=2};
int ReadNumber (){
    int num;
    cout<<"please enter the number \n";
    cin>>num;
    return num;
}
enNumberType CheckNumberType (int num){
    int result=num%2;
    if(result==0){
        return enNumberType::even;
    }
    else{
        return enNumberType::odd;
    }
}
void PrintNumberType (enNumberType NumberType){
    if(NumberType==enNumberType::even){
        cout<<"Number is even \n";
    }
    else {
        cout<<"Number is odd \n";
    }
}
int main(){
    PrintNumberType(CheckNumberType(ReadNumber()));
    
    return 0;
}