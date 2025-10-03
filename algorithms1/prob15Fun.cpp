#include<iostream>
using namespace std;
float CalcAreaOfRectangle (float length , float width)
{
    float area=length*width;
    return area;
}
int main(){
    float length , width;
    cout<<"Please enter length of rectangle \n";
    cin>>length;
    cout<<"Please enter width of rectangle \n";
    cin>>width;
    cout<<"Area of rectangle= "<<CalcAreaOfRectangle(length,width);
    return 0;
}