#include <iostream>
using namespace std;
struct strperson{
    string firstname;
    string lastname;
    string phone;
    int age;
};
void readdata (strperson &info)
{
    cout<<"Enter your first name \n";
    cin>>info.firstname;
    cout<<"Enter your last name \n";
    cin>>info.lastname;
    cout<<"Enter your age \n";
    cin>>info.age;
    cout<<"Enter your phone \n";
    cin>>info.phone;
}
void printdata (strperson info){
    cout<<"**************************************** \n";
    cout<<"First name: "<<info.firstname<<endl;
    cout<<"Last name: "<<info.lastname<<endl;
    cout<<"age: "<<info.age<<endl;
    cout<<"phone: "<<info.phone<<endl;
}
void readperson (strperson persons[2]){
    readdata(persons[0]);
    readdata(persons[1]);
}
void printperson (strperson persons[2])
{
    printdata(persons[0]);
    printdata(persons[1]);
}
int main(){
    strperson persons[2];
    readperson(persons);
    printperson(persons);
    return 0;
}