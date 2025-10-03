#include<iostream>
#include<string>
using namespace std;
int main(){
    string string1 , string2 , string3;
    cout<<"Enter string 1 \n";
    getline(cin,string1);
    cout<<"Enter string 2 \n";
    cin>>string2;
    cout<<"Enter string 3 \n";
    cin>>string3;
    cout<<"****************************** \n";
    cout<<"The length of string 1 = "<<string1.length()<<endl;
    cout<<"characters of 0,2,4,7 are "<< string1[0] << string1[2] << string1[4] << string1[7]<<endl;
    cout<<"Concatinating string2 and string3= "<<string2+string3<<endl;
    cout<<string2<<"+"<<string3<<"="<<stoi(string2)+stoi(string3)<<endl;
    return 0;
}