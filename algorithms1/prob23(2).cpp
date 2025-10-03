#include <iostream>  
#include<cmath>
using namespace std;
void ReadTriangleData (float &a ,float &b , float &c){
    cout<<"Enter the first side of triangle \n";
    cin>>a;
    cout<<"Enter the second side of triangle \n";
    cin>>c;
    cout<<"Enter the base of the triangle \n";
    cin>>b;
}
float CircleAreaByATriangle (float a , float b , float c ){
    const float pi=3.14;
    float p=(a+b+c)/2;
    float R=((a*b*c)/(4*sqrt(p*(p-a)*(p-b)*(p-c))));
    float area=pi*pow(R,2);
    return area;
}
void PrintArea (float area){
    cout<<"The area of circle = "<<area<<"\n";
}
int main(){
float a,b,c;
ReadTriangleData(a,b,c);
PrintArea(CircleAreaByATriangle(a,b,c));
    return 0;  
}