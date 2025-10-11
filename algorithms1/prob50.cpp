#include <iostream>  
using namespace std;
string ReadPINCode (){
    string PIN;
    cout<<"Enter your PIN Code \n";
    cin>>PIN;
    return PIN;
}
bool Login (){
    string PIN;
    int i=2;
    do{
        PIN=ReadPINCode();
        if(PIN=="1234"){
        return 1;}
        else{
            
            cout<<" Wrong PIN Your remainder Chances is "<<i<<endl;
            i--;
        }
    }while(i>=0);
    return 0;
}
int main(){
    if(Login()){
        
        cout<<"Your Balance is "<<7500<<endl;
    }
    else{
        
        cout<<"Your Account is Locked Call The Bank For Help"<<endl;
    }
    
    return 0;  
}