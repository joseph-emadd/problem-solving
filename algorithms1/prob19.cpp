#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float diameter , area;
    const float pi=3.14;
    cout<<"Enter the diameter of circle to calculate the area\n";
    cin>>diameter;
    area=(pi*pow(diameter,2))/4;
    cout<<"The area of circle = "<<ceil(area);
    return 0;
}