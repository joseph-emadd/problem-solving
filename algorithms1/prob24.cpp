#include<iostream>
using namespace std;
string ageValidation (int age)
{
    bool CheckStatus= age>=18 && age<=45;
    if(CheckStatus){
        return "Valid age";
    }
    else{
        return "Invalid age";
    }
}
int main(){
    int age;
    cout<<"Enter your age \n";
    cin>>age;
    cout<<"your age is "<<ageValidation(age);
    return 0;
}