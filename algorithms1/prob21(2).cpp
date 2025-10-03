#include <iostream>  
#include<cmath>
using namespace std;
float ReadInfo (){
    float l;
    cout<<"Enter circumference of the circle \n";
    cin>>l;
    return l;
}
float CircleAreaByCircumference (float l){
    const float pi=3.14;
    float area=(pow(l,2))/(4*pi);
    return area;
}
void PrintArea (float area){
    cout<<"The area of circle = "<<area;
}
int main(){    
    PrintArea(CircleAreaByCircumference(ReadInfo()));
    return 0;  
}