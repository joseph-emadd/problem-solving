#include <iostream>  
#include<cmath>
using namespace std;
void ReadInfo (float &diagonal, float &SideArea){
    cout<<"Enter the diagonal of the rectangle\n";
    cin>>diagonal;
    cout<<"Enter the side area of rectangle \n";
    cin>>SideArea;
}
float CalculateArea (float diagonal, float SideArea){
    float area= SideArea * sqrt( pow(diagonal,2) - pow(SideArea,2) );
    return area;
}
void PrintArea (float area){
    cout<<"The area of rectangle = "<<area<<endl;
}
int main(){
    float diagonal, SideArea;
    ReadInfo(diagonal,SideArea);
    PrintArea(CalculateArea(diagonal,SideArea));

    return 0;  
}