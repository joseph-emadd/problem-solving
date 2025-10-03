#include <iostream>  
using namespace std;
struct stNumbers{
    float num1;
    float num2;
    float num3;
};
stNumbers ReadNumbers (){
    stNumbers numbers;
    cout<<"Enter the first number \n";
    cin>>numbers.num1;
    cout<<"Enter the second number \n";
    cin>>numbers.num2;
    cout<<"Enter the third number \n";
    cin>>numbers.num3;
    return numbers;
}
float CalcSum (stNumbers numbers){
    return numbers.num1+numbers.num2+numbers.num3;
}
void PrintSum(stNumbers numbers){
    cout<<"the sum is "<<CalcSum(numbers);
}
int main()
{
    PrintSum(ReadNumbers());
    return 0;  
}