#include<iostream>
#include<string>
using namespace std;
string readName ()
{
    string name;
    cout<<"Enter your Name \n";
    getline(cin,name);
    return name;
}
void printName (string name)
{
    cout<<"your name is "<<name;
}
int main(){
    printName(readName());
    return 0;
}