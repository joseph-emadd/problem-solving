#include<iostream>
using namespace std;
//create struct about info (data type)
struct strinfo{
    string firstName;
    string lastName;
    int age;
    string phone;
};
void readInfo (strinfo &info){
    cout<<"Enter your first name \n";
    cin>>info.firstName;
    cout<<"Enter your last name \n";
    cin>>info.lastName;
    cout<<"Enter your age \n";
    cin>>info.age;
    cout<<"Enter your phone \n";
    cin>>info.phone;

}
void printInfo(strinfo info){
    cout<<"************************************* \n";
    cout<<"Your name is "<<info.firstName<<endl;
    cout<<"your last name is "<<info.lastName<<endl;
    cout<<"yor age is "<<info.age<<endl;
    cout<<"your phone is "<<info.phone<<endl;
    cout<<"************************************* \n";
}
int main(){
    strinfo person1;
    readInfo(person1);
    printInfo(person1);
    
    return 0;
}