#include <iostream>  
using namespace std;
struct stNumbers{
    float num1;
    float num2;
};
stNumbers ReadNumbers(){
    stNumbers numbers;
    cout<<"Enter number 1 \n";
    cin>>numbers.num1;
    cout<<"Enter number 2 \n";
    cin>>numbers.num2;
    return numbers;
}
float MaxNumber (stNumbers numbers){
    if(numbers.num1>numbers.num2)
    return numbers.num1;
    else 
    return numbers.num2;
}
void PrintMax (stNumbers numbers){
    cout<<"The max number is "<<MaxNumber(numbers);
}
int main(){
    PrintMax(ReadNumbers());
    return 0;  
}


