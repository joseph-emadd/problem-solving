#include <iostream>  
using namespace std;
void ReadInfo (float &A , float &H){
    cout<<"Enter the base of the triangle \n";
    cin>>A;
    cout<<"Enetr the height of the triangle \n";
    cin>>H;
}
float TriangleArea (float A, float H){
    float area= (A/2)*H;
    return area;
}
void PrintArea (float area){
    cout<<"The area of the triangle= "<<area<<endl;
}
int main(){
    float a ,h;
    ReadInfo(a,h);
    PrintArea(TriangleArea(a,h));
    return 0;  
}