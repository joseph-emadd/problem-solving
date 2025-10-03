#include <iostream>
using namespace std;
int ReadNumber (){
    int number;
    cout<<"Please enter the number \n";
    cin>>number;
    return number;
}
float CalcHalfNumber (int number){
    return (float)number/2;
}
void PrintResult (int number){
    string result = "The Half of "+to_string(number)+" is "+to_string(CalcHalfNumber(number));
    cout<<result<<endl;

}
int main(){
    PrintResult(ReadNumber());
    return 0;
}