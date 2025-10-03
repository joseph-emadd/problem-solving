#include <iostream>  
using namespace std;
struct stNumbers{
    int num1;
    int num2;
};
stNumbers RaedaNumbers(){
    stNumbers numbers;
    cout<<"Enter number 1 \n";
    cin>>numbers.num1;
    cout<<"Enter number 2 \n";
    cin>>numbers.num2;
    return numbers;
}
stNumbers SwapNumbers (stNumbers &numbers){
    int temp=numbers.num1;
    numbers.num1=numbers.num2;
    numbers.num2=temp;
    return numbers;
}
void PrintNumbers (stNumbers numbers){
    cout<<"Number 1 = "<<numbers.num1<<endl;
    cout<<"Number 2 = "<<numbers.num2<<endl;
    cout<<"After Swapping \n";
    SwapNumbers(numbers);
    cout<<"Number 1 = "<<numbers.num1<<endl;
    cout<<"Number 2 = "<<numbers.num2<<endl;
}
int main(){
    PrintNumbers(RaedaNumbers());
    return 0;  
}