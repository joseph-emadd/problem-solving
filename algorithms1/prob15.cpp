#include <iostream>  
using namespace std;
struct stRectangle{
    float length;
    float width;
};
stRectangle ReadInfo (){
    stRectangle rectangle;
    cout<<"Enter the length of the rectangle \n";
    cin>>rectangle.length;
    cout<<"Enter the widyh of reactangle \n";
    cin>>rectangle.width;
    return rectangle;
}
float AreaOfRectangle (stRectangle rectangle){
    float area;
    area=rectangle.length*rectangle.width;
    return area;
}
void PrintArea (float area){
    cout<<" \nThe area of rectangle= "<<area<<endl;
}
int main(){
    PrintArea(AreaOfRectangle(ReadInfo()));
    return 0;  
}