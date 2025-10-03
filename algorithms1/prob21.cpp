#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float l, area;
    const float pi=3.14;
    cout<<"Enter l to calculate circle area \n";
    cin>>l;
    area=(pow(l,2))/(4*pi);
    cout<<"the area of circle= "<<floor(area)<<endl;
    return 0;
}