#include <iostream>  
#include<cmath>
using namespace std;
int ReadNumber (){
    int num;
    cout<<"Please enter the number \n";
    cin>>num;
    return num;
}
int ReadPower (){
    int power;
    cout<<"Please enter the power \n";
    cin>>power;
    return power;
}
int Power (int m, int n){
    int power=1;
    if(m==0){
        return 1;
    }
    for(int i=m ; i>=1 ; i--){
        power=power*n;
    }
    return power;
}
int main(){
    cout<<Power(ReadPower(), ReadNumber());
    return 0;  
}