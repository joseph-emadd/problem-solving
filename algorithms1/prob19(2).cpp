#include <iostream>  
#include<cmath>
using namespace std;
float ReadDiameter (){
    float diameter;
    cout<<"Enter the diameter of the circle \n";
    cin>>diameter;
    return diameter;
}
float CircleArea (float diameter){
    const float pi=3.14;
    float area=(pi*pow(diameter,2))/4;
    return area;
}
void PrintArea (float area){
    cout<<"The area of circle= "<<area;
}
int main(){
    PrintArea(CircleArea(ReadDiameter()));
    return 0;  
}