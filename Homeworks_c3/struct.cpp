#include <iostream>
using namespace std;
struct stinfo {
    string firstname;
    string lastname;
    int age;
    string city;
    string university;
};
void readinfo (stinfo &info)
{
    
    cout<<"Enter your first name \n";
    cin>>info.firstname;
    cout<<"Enter your last name \n";
    cin>>info.lastname;
    cout<<"Enter your age \n";
    cin>>info.age;
    cout<<"Enter your city \n";
    cin>>info.city;
    cout<<"Enter your university \n";
    cin>>info.university;

}
void printinfo (stinfo info){
    cout<<"***************************** \n";
    cout<<info.firstname<<endl;
    cout<<info.lastname<<endl;
    cout<<info.age<<endl;
    cout<<info.city<<endl;
    cout<<info.university<<endl;
    cout<<"***************************** \n";
}
int main()
{
   stinfo info;
   readinfo(info);
   printinfo(info);
    return 0;
}