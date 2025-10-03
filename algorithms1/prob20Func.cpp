#include<iostream>
#include<cmath>
using namespace std;
float clacAreaOfCircle(float a)
{
    const float pi=3.14;
    float area=(pi*pow(a,2))/4;
    return area;
}
int main(){
   float a;
   cout<<"Please enter a of circle to calculate circle area inscribed in a  square \n";
   cin>>a;
   cout<<"The area of circle = "<<clacAreaOfCircle(a);
    return 0;
}