#include <iostream>  
#include<cmath>
using namespace std;
int ReadNumber (){
    int num;
    cout<<"Please enter the number \n";
    cin>>num;
    return num;
}
void CalcPower2_3_4 (int num){
    int a ,b, c;
    a=num*num;
    b=num*num*num;
    c=num*num*num;
    cout<<a<<endl<<b<<endl<<c<<endl;
}
int main(){
    CalcPower2_3_4(ReadNumber());
    return 0;  
}