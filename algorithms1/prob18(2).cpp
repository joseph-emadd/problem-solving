#include <iostream>  
#include<cmath>
using namespace std;
void ReadRadius (float &r){
    cout<<"Enter The radius of the circle \n";
    cin>>r;
}
float CircleArea (float r){
    const float pi=3.14;
    float area=pi*pow(r,2);
    return area;
}
void PrintResult (float area){
    cout<<"The area of circle= "<<area;
}
int main(){
    float r;
    ReadRadius(r);
    PrintResult(CircleArea(r));
    return 0;  
}