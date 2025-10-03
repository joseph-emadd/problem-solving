#include<iostream>
#include<cmath>
using namespace std;
float calcAreaOfCircle (float r)
{
    const float pi=3.14;
    float area=pi*pow(r,2);
    return area;
}
int main(){
    float r;
    cout<<"Please enter r \n";
    cin>>r;
    cout<<"The area of circle = "<<calcAreaOfCircle(r);
    return 0;
}