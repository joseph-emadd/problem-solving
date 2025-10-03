#include <iostream>  
#include<cmath>
using namespace std;
struct stTriangleData{
    float a;
    float b;
};
stTriangleData ReadTriangleData (){
    stTriangleData triangle;
    cout<<"Enter the side of the triangle \n";
    cin>>triangle.a;
    cout<<"Enter the base of the triangle \n";
    cin>>triangle.b;
    return triangle;
}
float AreaCircleByTriangle (stTriangleData triangle){
    const float pi=3.14;
    float area = (pi*pow(triangle.b,2))/4 *((2*triangle.a-triangle.b)/(2*triangle.a+triangle.b));
    return area;
}
void PrintArea (float area){
    cout<<"The area of circle = "<<area<<endl;
}
int main(){
    PrintArea(AreaCircleByTriangle(ReadTriangleData()));

    return 0;  
}