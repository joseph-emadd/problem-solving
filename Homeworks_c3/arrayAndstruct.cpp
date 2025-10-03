#include<iostream>
using namespace std;
struct strinfo
{
    string firstname;
    string lastname;
    int phone;
    int age;
};
void readinfo (strinfo &person)
{
    cout<<"Enter your first name \n";
    cin>>person.firstname;
    cout<<"Enter your last name \n";
    cin>>person.lastname;
    cout<<"Enter your age \n";
    cin>>person.age;
    cout<<"Enter your phone \n";
    cin>>person.phone;
}
void printinfo(strinfo person){
    cout<<"***************************** \n ";
    cout<<"First name: "<<person.firstname<<endl;
    cout<<"Last name: "<<person.lastname<<endl;
    cout<<"Age: "<<person.age<<endl;
    cout<<"Phone: "<<person.phone<<endl;
    cout<<"***************************** \n";
}

void readpersons (strinfo person[2]){
    readinfo(person[0]);
    readinfo(person[1]);
}
void printpersons (strinfo person[2]){
    printinfo(person[0]);
    printinfo(person[1]);
}

int main(){
    strinfo person[2];
    readpersons(person);
    printpersons(person);
    return 0;
}