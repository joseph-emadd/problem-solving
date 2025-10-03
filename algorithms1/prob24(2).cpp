#include <iostream>  
using namespace std;
int ReadAge (){
    int age;
    cout<<"Enter the age of you \n";
    cin>>age;
    return age;
}
bool ValidateNumberRange (int number , int from , int to ){
    return (number>=from && number<=to);
}
void PrintResult (int age){
    if(ValidateNumberRange(age,18,45))
    cout<<"Valid age \n";
    else
    cout<<"Invalid age \n";
}
int main(){
    PrintResult(ReadAge());

    return 0;  
}