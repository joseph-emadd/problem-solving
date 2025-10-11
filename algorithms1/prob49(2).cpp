#include <iostream>  
using namespace std;
string ReadPINCode (){
    string PIN;
    cout<<"Enter the PIN Code \n";
    cin>>PIN;
    return PIN;
}
bool Login(){
    string PIN;
    do{
        PIN=ReadPINCode();
        if(PIN=="1234"){
            return 1;
        }
        else{
            system("color 4F");
            cout<<"Wrong PIN \n ";
        }
    }while(PIN!="1234");
    return 0;
}
int main(){
    if(Login()){
        system("color 2F");
        cout<<"Your Balance is "<<7500;
    }
    
    return 0;  
}