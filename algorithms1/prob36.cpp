//problem 36
#include<iostream>
using namespace std;
float calculator (float num1, float num2, char operation)
{
    if(operation=='+'){
        return num1+num2;
    }
    else if(operation=='-'){
        return num1-num2;
    }
    else if(operation=='*'){
        return num1*num2;
    }
    else if(operation=='/'){
        return num1/num2;
    }
    else{
        return "Wrong operation ";
    }
}
int main(){
    float num1,num2;
    char operation;
    cout<<"Enter the two numbers \n";
    cin>>num1>>num2;
    cout<<"Enter the operation \n";
    cin>>operation;
    cout<<calculator(num1,num2,operation);
    
    return 0;
}