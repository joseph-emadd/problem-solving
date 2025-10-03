#include <iostream>  
#include<cmath>
using namespace std;
struct stNumbers{
    int n;
    int m;
};
stNumbers ReadBaseAndPower (){
    stNumbers numbers;
    cout<<"Enter the base \n";
    cin>>numbers.n;
    cout<<"Enter the power \n";
    cin>>numbers.m;
    return numbers;
}
int Power (stNumbers numbers){
    int power=1;
    if(numbers.m==0){
        return 1;
    }
    for(int i=numbers.m ; i>=1 ; i--){
        power=power*numbers.n;
    }
    return power;
}
int main(){
    cout<<Power(ReadBaseAndPower());
    return 0;  
}