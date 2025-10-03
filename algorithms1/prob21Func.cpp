#include<iostream>
#include<cmath>
using namespace std;
float caclcAreaOfCircle (float l)
{
    const float pi=3.14;
    float area=(pow(l,2))/(4*pi);
    return area;
}
int main(){
    float l;
    cout<<"Please enter l to calculate area of circle along the circumference \n";
    cin>>l;
    cout<<"The area of circle= "<<caclcAreaOfCircle(l)<<endl;
    return 0;
}