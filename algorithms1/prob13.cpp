#include <iostream>  
using namespace std;
struct stNumbers {
    float num1;
    float num2;
    float num3;
};
stNumbers ReadNumbers (){
    stNumbers numbers;
    cout<<"Enter number 1 \n";
    cin>>numbers.num1;
    cout<<"Enter number 2 \n";
    cin>>numbers.num2;
    cout<<"Enter number 3 \n";
    cin>>numbers.num3;
    return numbers;
}
float MaxOf3Numbers (stNumbers numbers){
    if(numbers.num1>numbers.num2 &&numbers.num1>numbers.num3)
    return numbers.num1;
    else if(numbers.num2>numbers.num1 && numbers.num2>numbers.num3)
    return numbers.num2;
    else
    return numbers.num3;
}
void PrintMax (float max){
    cout<<"The Max of the 3 numbers is "<<max<<endl;
}
int main()
{
    PrintMax(MaxOf3Numbers(ReadNumbers()));
    return 0;  
}