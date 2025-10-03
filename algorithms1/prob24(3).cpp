#include <iostream>  
#include<cmath>
using namespace std;
int ReadAge (){
    int age;
    cout<<"Enter the age of you \n";
    cin>>age;
    return age;
}
bool CheckValidation (int age){
    return age>=18 && age<=45;
}
void PrintStatus (int age){
    if(CheckValidation(age))
    cout<<"Vaild Age";
    else
    cout<<"Invalid age \n";
}
int main(){
    PrintStatus(ReadAge());
    return 0;  
}