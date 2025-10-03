#include<iostream>
#include<cmath>
using namespace std;
float clacAreaOfCircle(float diameter)
{
    const float pi=3.14;
    float area=(pi*pow(diameter,2))/4;
    return area;
}
int main(){
   float diameter;
   cout<<"Please enter diameter of circle to calculate area \n";
   cin>>diameter;
   cout<<"The area of circle = "<<clacAreaOfCircle(diameter);
    return 0;
}