#include<iostream>
#include<cmath>
using namespace std;
float calcAreaOfCircle (float a, float b)
{
    const float pi=3.14;
    float area=(pi*pow(b,2))/4 * ((2*a-b)/(2*a+b));
    return area;
}
int main(){
    float a,b;
    cout<<"Enter a and b to calculate circle area inscribed in on isosceles triangle \n";
    cin>>a>>b;
    cout<<"The area of circle = "<<calcAreaOfCircle(a,b);
    return 0;
}