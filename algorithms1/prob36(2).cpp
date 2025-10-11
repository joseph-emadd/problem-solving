#include <iostream>  
using namespace std;
enum enOperationType {add='+' , subtract='-' , multiply='*' , divide= '/'};
float ReadNumber (string message){
    float num;
    cout<<message<<endl;
    cin>>num;
    return num;
}
enOperationType ReadOperationType (){
    char OPerationType;
    cout<<"Enter the operation type \n";
    cin>>OPerationType;
    return (enOperationType)OPerationType;
}
float Calculate (float num1, float num2 , enOperationType OperationType){
    switch(OperationType){
        case enOperationType::add :
        return num1+num2;
        break;
        case enOperationType::subtract :
        return num1-num2;
        break;
        case enOperationType::multiply :
        return num1*num2;
        break;
        case enOperationType::divide :
        return num1/num2;
        break;
    }
}
int main(){
    float num1 =ReadNumber("Please enter the first number \n");
    float num2=ReadNumber("Please enter the second number \n");
    enOperationType OperationType =ReadOperationType();
    cout<<"Result = "<<Calculate(num1,num2,OperationType);
    return 0;  
}