#include <iostream>  
#include<cmath>
using namespace std;
float ReadSquareSide (){
    float a;
    cout<<"Enter square side \n";
    cin>>a;
    return a;
}
float CircleAreaInscripedInASquare (float a){
    const float pi=3.14;
    float area=(pi*pow(a,2))/4;
    return area;
}
void PrintArea (float area){
    cout<<"The area of the circle = "<<area<<endl;
}
int main(){
    PrintArea(CircleAreaInscripedInASquare(ReadSquareSide()));
    
    return 0;  
}