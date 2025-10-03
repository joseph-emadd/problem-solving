#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a , area;
    const float pi=3.14;
    cout<<"Enter a to calculate the area of the circle inscribted in a square \n";
    cin>>a;
    area=(pi*pow(a,2))/4;
    cout<<"The area of the circle = "<<ceil(area);
    return 0;
}