#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a ,b ,area;
    const float pi=3.14;
    cout<<"Enter a and b to calculate the area of the circle inscribed in an isosceles triangle\n";
    cin>>a>>b;
    area=((pi*pow(b,2))/4)*((2*a-b)/(2*a+b));
    cout<<"The area of circle = "<<floor(area)<<endl;
    return 0;
}