#include<iostream>
using namespace std;
string CheckPin (int AtmCode)
{
    if(AtmCode==1234){
        return "Your balance is 25k";
    }
    else{
        return "Wrong pin";
    }

}
int main(){
    int AtmCode;
    cout<<"Please enter your atm pin \n";
    cin>>AtmCode;
    cout<<CheckPin(AtmCode);
    
    return 0;
}