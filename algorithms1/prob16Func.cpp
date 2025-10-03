#include<iostream>
#include<cmath>
using namespace std;
float calcAreaOfRectangle (float diagnal, float sidearea)
{
    float area= diagnal*sqrt(pow(sidearea,2)-pow(diagnal,2));
    return area;
}
int main(){
    float diagnal, sidearea;
    cout<<"Enter diagnal of rectangle \n ";
    cin>>diagnal;
    cout<<"Enter side area of rectangle \n ";
    cin>>sidearea;
    cout<<"The area of rectangle = "<<calcAreaOfRectangle(diagnal,sidearea);
    return 0;
}