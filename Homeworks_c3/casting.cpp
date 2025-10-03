#include<iostream>
#include<string>
using namespace std;
int main(){
    string st1="43.22";
    int intnum=stoi(st1);
    float floatnum =stof(st1);
    double doublenum= stod(st1);
    cout<<intnum<<endl<<floatnum<<endl<<doublenum<<endl;
    int n1=20;
    string s1=to_string(n1);
    double n2=33.5;
    string s2=to_string(n2);
    float n3=55.23;
    string s3=to_string(n3);
    int n4=(int)n3;
    return 0;
}