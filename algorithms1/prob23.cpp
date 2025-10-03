#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c,d, area, p;
    const float pi=3.14;
    cout<<"Enter a,b,c to calculate circle area \n";
    cin>>a>>b>>c;
    p=(a+b+c)/2;
    d=(a*b*c)/(4*sqrt(p*(p-a)*(p-b)*(p-c)));
    area=pi*pow(d,2);
    cout<<"The area of circle= "<<round(area)<<endl;
    return 0;
}