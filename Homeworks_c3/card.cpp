#include<iostream>
using namespace std;
struct straddress{
    string street;
    int numberOfHome;
};
struct card{
    string name;
    int age;
    string country;
    string city;
    float monthlySalary;
    float yearlySalary;
    char gender;
    bool married; 
    straddress address;
};
int main(){
    card card1;
    cout<<"Enter your name \n";
    cin>>card1.name;
    cout<<"Enter your age \n";
    cin>>card1.age;
    cout<<"Enter your country \n";
    cin>>card1.country;
    cout<<"Enter your city \n";
    cin>>card1.city;
    cout<<"Enter your monthly salary \n";
    cin>>card1.monthlySalary;
    card1.yearlySalary=card1.monthlySalary*12;
    cout<<"Enter your gender m or f \n";
    cin>>card1.gender;
    cout<<"Enter married or not (1 or 0) \n";
    cin>>card1.married;
    cout<<"Enter your street";
    cin>>card1.address.street;
    cout<<"Enter your number of home \n";
    cin>>card1.address.numberOfHome;
    
    cout<<"********************************** \n";
    cout<<"Name:"<<card1.name<<endl;
    cout<<"Age:"<<card1.age<<endl;
    cout<<"City:"<<card1.city<<endl;
    cout<<"Country:"<<card1.country<<endl;
    cout<<"Monthly Salary:"<<card1.monthlySalary<<endl;
    cout<<"Yearly Salary:"<<card1.yearlySalary<<endl;
    cout<<"Gender:"<<card1.gender<<endl;
    cout<<"Married:"<<card1.married<<endl;
    cout<<"Street:"<<card1.address.street<<endl;
    cout<<"Number of Home:"<<card1.address.numberOfHome<<endl;
    cout<<"********************************** \n";
    
    return 0;
}